#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <iostream> // debug

class PmergeMe {
    private:
        std::vector<int>    m_vector;
        std::deque<int>     m_deque;
		double				m_vecTime;
		double				m_deqTime;
		int					m_unitSize;

		void	validateInput(const std::string& input);
		void	sortVector();
		void	sortDeque();
		void	display(const std::vector<int>& unsorted);
        int     jacobsthal(int k);

        template<typename C>
        void	insert(C& cont, C& main, C& pend, bool isOdd, int odd, C& leftover)
        {
            int k = 2;
            int prev = 1;
			int inserted = 0;

            if (pend.size() > 1) {
                while (!pend.empty()) {
                    int jc = jacobsthal(k); // 3, 5, 11, 21...
                    int insert = jc - prev; // 2, 2, 6, 10... elements to insert
                    prev = jc; // 3, 5, 11, 21...
                    k++; // 3, 4, 5, 6...
				
                    if (insert > (int)pend.size())
                        break;
                    // insert (insert amount of) elements backwards from the beginning of pend and erase them
					// area of binary search for each element is from beginning of main up to corresponding a of b being inserted
                    for (auto curr = pend.begin() + insert - 1; curr >= pend.begin(); curr--) {
                        int num = *(curr);
                        auto pos = std::upper_bound(main.begin(), main.begin() + jc + inserted, num);
                        main.insert(pos, num);
                        pend.erase(curr);
                    }
					inserted += insert;
                }
            }

            if (!pend.empty()) {
                for (int num: pend) {
                    auto  pos = std::upper_bound(main.begin(), main.end(), num);
                    main.insert(pos, num);
                }
            }

            if (isOdd) {
                auto pos = std::upper_bound(main.begin(), main.end(), odd);
                main.insert(pos, odd);
            }

            C	newCont;

            for (int num: main) {
                auto pos = std::find(cont.begin(), cont.end(), num);
                newCont.insert(newCont.end(), pos - (m_unitSize - 1), pos + 1);
            }
            newCont.insert(newCont.end(), leftover.begin(), leftover.end());

            cont = newCont;
        }

    public:
        PmergeMe(const std::string& input);
        ~PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe&   operator=(const PmergeMe& other);

        void	sort();
};

#endif

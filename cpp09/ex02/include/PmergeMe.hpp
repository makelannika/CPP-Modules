#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <algorithm>

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

		template<typename C>
		void    insert(C& cont, C& main, C& pend, bool isOdd, int odd, C& leftover)
		{
			for (int num: pend) {
				auto  pos = std::upper_bound(main.begin(), main.end(), num);
				main.insert(pos, num);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Copier.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:55:28 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 13:24:35 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Copier.hpp"

Copier::Copier() {}

bool    Copier::openInFile( char *filename ) {
    std::string infile = filename;

    in.open(infile);
    if (!in.is_open()) {
        std::cout << "Error: opening input file failed" << std::endl;
        return false;
    }
    return true;
}

bool    Copier::openOutFile( char*filename ) {
    std::string outfile = filename;

    out.open(outfile + ".replace");
    if (!out.is_open()) {
        std::cout << "Error: opening output file failed" << std::endl;
		return false;
    }
    return (true);
}
    
bool    Copier::copyAndReplace( char *s1, char *s2 ) {
    std::string to_replace = s1;
    std::string replacement = s2;
    if (to_replace.empty()) {
        std::cout << "Error: s1 cannot be empty" << std::endl;
        return false;
    }
    std::size_t pos = 0;
    std::string buffer;

    while (getline(in, buffer)) {
		while ((pos = buffer.find(to_replace, pos)) != std::string::npos) {
			buffer.erase(pos, to_replace.length());
			buffer.insert(pos, replacement);
			pos += replacement.length();
		}
		pos = 0;
		out << buffer << std::endl;
	}
    return true;
}

Copier::~Copier() {
    if (in.is_open())
        in.close();
    if (out.is_open())
        out.close();
}

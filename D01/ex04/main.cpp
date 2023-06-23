/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:48:40 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/23 11:03:58 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void	replace_string(std::string& file_content, const std::string& old_word, const std::string& new_word)
{
	std::string	new_str;
	size_t		pos;
	size_t		old_word_len = old_word.length();

	new_str.reserve(file_content.length());
	pos = file_content.find(old_word, 0);
	while (pos != std::string::npos)
	{
		new_str += file_content.substr(0, pos);
		new_str += new_word;
		file_content.erase(0, pos + old_word_len);
		pos = file_content.find(old_word, 0);
	}
	new_str += file_content;
	file_content.swap(new_str);
}

std::string read_file(const std::string filename)
{
	std::ifstream 	file(filename);
	std::string		file_content;
	std::string		line;

	if (!file.is_open())
	{
		std::cout << "Failed to open entry file" << std::endl;
		return ("");
	}
	while (std::getline(file, line))
	{
		file_content += line;
		file_content += "\n";
	}
	if (file_content.empty())
	{
		std::cout << "Empty file" << std::endl;
		return ("");
	}
	return (file_content);
}

void	write_to_file(const std::string& filename, const std::string& file_content)
{
	std::ofstream output_file(filename + ".replace");

	if (!output_file.is_open())
	{
		std::cout << "Failed to create output file" << std::endl;
		return ;
	}
	output_file << file_content;
}

int main(int ac, char *av[])
{
	std::string file_content;
	std::string	old_word;
	std::string	new_word;

	if (ac != 4)
	{
		std::cout << "Usage: ./sed_is_for_losers filename old_word new_word" << std::endl;
		return (1);
	}
	old_word = av[2];
	new_word = av[3];
	if (old_word.empty() || new_word.empty())
	{
		std::cout << "Empty word" << std::endl;		
		return (1);
	}
	file_content = read_file(av[1]);
	if (file_content.empty())
		return (1);
	replace_string(file_content, av[2], av[3]);
	std::cout << file_content << std::endl;
	write_to_file(av[1], file_content);	
	return (0);
}
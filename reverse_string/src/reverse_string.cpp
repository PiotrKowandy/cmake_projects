#include "reverse_string.hpp"

#include <string>
#include <cctype>
#include <algorithm>

void switch_string(std::string& word) {

	int size_of_word = word.size()-1;

	for (size_t i =0; i <= size_of_word/2; ++i){
		std::swap(word[size_of_word-i], word[i]);
	}
}

void switch_string2(std::string& word){
	std::reverse(word.begin(), word.end());
}


void switch_string3(std::string& word){

	int size_of_word = word.size() - 1;

	for (size_t i = 0; i <= size_of_word/2; ++i){
		char temp = word[size_of_word-i];
		word[size_of_word-i] = word[i];
		word[i] = temp;
	}
}
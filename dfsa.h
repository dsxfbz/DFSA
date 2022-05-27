#ifndef DFSA_H
#define DFSA_H

#include <iostream>
#include <fstream>
#include <string>

//U must be a pointer to an array of type T, and len must be the array's size.
template <class T, class U>
bool in_arr(const T & elem, const U & arr, const int & len) {
	U ptr = arr;
	for (int i=0; i<len; i++) {
		if (*ptr == elem) {
			return true;
		}
		ptr++;
	}
	return false;
}

class dfsa {
	public:
		dfsa();
		dfsa(const std::string & filename);
		dfsa(const dfsa & source);
		
		dfsa operator = (const dfsa & source);
		
		~dfsa();
		
		void get_data(const std::string & filename);
		
		bool process(const std::string & input);
		
		void print();
		
	private:
		char m_curr_state;
		int m_num_starts;
		char * m_start_states;
		int m_num_rules;
		char * m_rule_starts;
		char * m_rule_symbols;
		char * m_rule_ends;
		int m_num_ends;
		char * m_end_states;
		
		bool step(const char & symbol);
		
		bool valid();
		
		void parse_starts(const std::string & line);
		void parse_rules(const std::string & line);
		void parse_ends(const std::string & line);
};

#include "dfsa.hpp"

#endif

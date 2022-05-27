/*
 * main.cpp
 * 
 * Copyright 2022 Daniel Xiang <daniel@debian-11-school>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include "dfsa.h"

#include <iostream>

int main(int argc, char **argv)
{
	dfsa automata("sample_input.txt");
	
	std::cout<<"\n";
	automata.print();
	
	/*
	char * test_arr = new char[10];
	for (int i=0; i<10; i++) {
		test_arr[i] = char(int('a')+i);
		std::cout<<test_arr[i];
	}
	std::cout<<'\n';
	std::cout<<in_arr('d', test_arr, 10);
	std::cout<<'\n';
	std::cout<<in_arr('z', test_arr, 10);
	std::cout<<'\n';
	delete[] test_arr;
	*/
	return 0;
}


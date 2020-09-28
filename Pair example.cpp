// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <utility>
#include <string>

template<typename T1, typename T2>
void printM(std::pair<T1,T2> &member) { std::cout <<  member.first << "\t" <<member.second << "\n"; }


int main() {

	std::pair<int, std::string> one = { 1, "Luther" };
	std::pair<int, std::string>	two = { 2, "Diego" };
	std::pair<int, std::string> three = { 3, "Emmy" };
	std::pair<int, std::string> four = { 4, "Klaus" };
	std::pair<int, std::string> five = { 5, "" };
	std::pair<int, std::string> six = { 6, "Ben" };
	std::pair<int, std::string> seven = { 7, "Vanya" };

	std::cout << "Number \t" << " Alias\t" << "\n";
	printM(one);
	printM(two);
	printM(three);
	printM(four);
	printM(five);
	printM(six);
	printM(seven);


	return 0;
}




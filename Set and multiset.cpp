// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <set>
#include <string>

template <typename T>
void printS(T& set) {
	for (auto i : set)
		std::cout << i << " ";
	std::cout << "\n";
}

int main() {

	// SET DECLARATION
	std::set<std::string> s1 = { "Un", "Deux","Trois","Quattre" };
	std::multiset<std::string> ms1 = { "Uno", "Dos","Tres","Cuatro" };

	// PRINT SET
	std::cout << "S1 CONTAINS\n";
	printS(s1);
	std::cout << "\nMS1 CONTAINS\n";
	printS(ms1);

	std::cout << "\n";

	// WRITE DATA
	std::cout << "INSERT REPEATED DATA";
	s1.insert("Quattre");
	ms1.insert("Cuatro");
	std::cout << "\n";
	printS(s1);
	printS(ms1);
	std::cout << "\n";

	// FIND
	std::cout << "FIND A SPECIFIC DATA\n";
	std::set<std::string>::iterator it = s1.find("Un");
	if (it != s1.end()) {
		std::cout << "Erasing " << *it << "\n";
		s1.erase(it);
	}
	else 
		std::cout << "Don't found\n"; 
	printS(s1);

	// CLEAR DATA
	std::cout << "\nCLEAR ALL DATA\n";
	s1.clear();

	// EMPTY DATA
	if (s1.empty())		std::cout << "No data.\n";
	printS(s1);


	return 0;
}
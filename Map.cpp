// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <map>

// print a pair from an iterator
template <typename T1, typename T2>
void print_pair(std::pair<T1, T2>& p) {
	std::cout << p.first << ": " << p.second;
}

int main() {

	// DECLARATION
	std::map<int, std::string> m1 = { {1,"Luther"},{2,"Diego"},{3, "Alisson"},{4,"Klaus"},{5,"Five"},{6, "Ben"}, {7,"Vanya"} };
	std::multimap<int, std::string> mm1 = { {1,"Luther"},{2,"Diego"},{3, "Alisson"},{4,"Klaus"},{5,"Five"},{6, "Ben"}, {7,"Vanya"} };

	// INSERT DUPLICATED DATA
	auto r = m1.insert({ 5,"Five" });
	mm1.insert({ 5,"Five" });

	// CHECK IF INSERTING WORKED
	if (r.second)
		std::cout << "Insert success\n";
	else
		std::cout << "Duplicated datat\n";

	// PRINT
	std::cout << "M1 DATA\n";
	for (auto i : m1)
		std::cout << i.first << " " << i.second << "\n";
	std::cout << "\n";

	std::cout << "MM1 DATA\n";
	for (auto i : mm1) 
		std::cout << i.first << " " << i.second << "\n";
	std::cout << "\n";

	// FIND VALUE
	auto it = m1.find(7);

	// ERASE
	if (it != m1.end()) {
		print_pair(*it);
		std::cout <<" erased\n";
		m1.erase(it);
	}
	else
		std::cout << "Not found\n";

	return 0;
}
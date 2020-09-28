// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <deque>

template <typename t>
void printD(t& d) {
	int c = 0;
	if (d.empty())	std::cout << "No data\n";
	for (auto i : d) {
		std::cout << "Item no " << c++ << " is " << i << "\n";
	}
	std::cout << "\n";
}

int main() {

	// DEQUE CREATION
	std::deque <std::string> d1 = { "uno","dos","tres"};

	// GENERAL INFO
	std::cout << "GENERAL INFO\n"
		<< "Size\t" << d1.size() << "\n"
		<< "Front item\t" << d1.front() << "\n"
		<< "Back item\t" << d1.back() << "\n\n";

	// PRINT ALL ITEMS
	std::cout << "PRINT ALL\n";
	printD(d1);

	// ADD ITEMS
	std::cout << "ADD ITEMS\n";
	d1.push_back("cuatro");
	printD(d1);

	// POP ITEMS
	std::cout << "POP ITEMS\n";
	d1.pop_back();
	printD(d1);

	// EMPTY CONTAINER
	std::cout << "EMPTY CONTAINER\n";
	while (d1.empty() != 1)
		d1.pop_back();
	std::cout << "Done.\n";
	printD(d1);

	return 0;
}
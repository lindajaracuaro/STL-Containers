// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <array>

template <typename t>
void printA(t &a) {
	for (auto i : a)
		std::cout << i << " ";
	std::cout << "\n";
}

template <typename t>
void accessI(t& a) {
	int choice;
	std::cout << "Select an item number to access from A1\t";
	std::cin >> choice;
	while (choice > a.size()) {
		std::cout << "Invalid number, try again\n"
			<< "Select an item number to access\t";
		std::cin >> choice;
	}
	std::cout << "Item number " << choice << " is "
		<<a[choice] << "\n";
}

template <typename t>
void accessD(t& a) {
	auto* aPtr = a.data();
	for (size_t i = 0; i < a.size(); i++)
		std::cout << "Item number " << i << " is " << *aPtr++ << "\n";
	std::cout << "\n";
}

int main() {

	// ARRAY CREATION
	std::array<int, 4> a1 = { 1,2,3,4 };
	std::array<std::string, 4> a2 = { "uno", "dos", "tres", "cuatro" };
	
	// PRINT ITEMS 
	std::cout << "A1 items are\t";
	printA(a1);
	std::cout << "A2 items are\t";
	printA(a2);
	std::cout << "\n";

	// ACCESS BY INDEX
	accessI(a1);
	accessI(a2);
	std::cout << "\n";

	// ACCESS ITEMS BY DATA
	std::cout << "A1 access data\n";
	accessD(a1);	
	std::cout << "A2 access data\n";
	accessD(a2);
	std::cout << "\n";

	return 0;
}
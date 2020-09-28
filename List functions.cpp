// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <list>

template<typename L>
void printL(std::list<L>& list) {
	if (list.empty())	std::cout << "The list is empty.\n";
	for (L i : list)		std::cout << i << " ";
	std::cout << "\n";
}

int main(){
	
	//	CREATING A LIST
	std::list<int> list1 = { 3, 6, 9, 12 };
	
	//	PRINTING A LIST
	std::cout << "List one contains\t";
	printL(list1);

	//	GENERAL INFO
	std::cout << "Size\t" << list1.size()
		<< "\nFront\t" << list1.front()
		<< "\nLast\t" << list1.back();

	//	ADD AN ELEMENT
	std::cout << "\nAdd an item\t";
	list1.push_back(49);
	printL(list1);

	//	ERASE AN ELEMENT
	std::cout << "Pop back last item\t";
	list1.pop_back();
	printL(list1);

	//	CREATING AN ITERATOR
	std::list<int>::iterator it1 = list1.begin();

	//	FIND AN ELEMENT
	std::cout << "Find no. 9 and erase it\t";
	while (*++it1 != 9 && it1 != list1.end());
	std::cout << "Done.\n";

	//	REMOVE ELEMENT
	list1.erase(it1);
	std::cout << "Print the list\t";
	printL(list1);

	return 0;
}
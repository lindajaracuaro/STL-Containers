// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <vector>
#include <string>

void message(const char* text) { std::cout << text; }
void message(const char* text, const int item) { std::cout << text << "\t" << item << "\n"; }
void message(const char* text, const char* item) { std::cout << text << "\t" << item << "\n"; }
void message(const char* text, std::string item) { std::cout << text << "\t" << item << "\n"; }

template <typename v>
void printv(std::vector<v>& vector, int size) {
	for (v &i : vector)
		std::cout << i << " ";
	if (vector.empty())		std::cout << "Nothing at all";
	std::cout << "\n";
}

template <typename v>
void printItem(v& vector) {
	int nItem;
	message("Insert the item number to show of V2\t");
	std::cin >> nItem;
	while (nItem > vector.size()) {
		std::cout << "** Invalid item, try again \n";
		message("Insert the item number to show of V2\t");
		std::cin >> nItem;
	}
	std::cout << "Item number \t" << nItem << " is " << vector[nItem] << "\n";
}

template <typename v>
void eraseV(v& vector) {
	while (vector.empty() != 1)
		vector.pop_back();
	std::cout << "Done.\n";
}

int main() {

	int nItem;
	int choice;

	message("-- VECTOR FUNCTIONS --\n\n");

	//	VECTOR CREATION
	std::vector<int>v1 = { 1,2,3 };
	std::vector<const char*> v2 = { "s","o","l","d" };
	std::vector<std::string> v3 = { "uno", "dos", "tres" };

	//	VECTOR CONTENT
	message("CONTENT\n");
	message("V1 contains\t");
	printv(v1, v1.size());
	message("V2 contains\t");
	printv(v2, v2.size());
	message("V3 contains\t");
	printv(v3, v3.size());

	//	SIZE
	message("\nSIZE\n");
	message("V1 size\t",v1.size());
	message("V2 size\t", v2.size());
	message("V3 size\t", v3.size());

	//	FRONT
	message("\nFRONT ITEM\n");
	message("V1 front\t", v1.front());
	message("V2 front\t", v2.front());
	message("V3 front\t", v3.front());

	//	BACK
	message("\nBACK ITEM\n");
	message("V1 back\t", v1.back());
	message("V2 back\t", v2.back());
	message("V3 back\t", v3.back());

	//	INDEX
	message("\nINDEX\n");
	printItem(v2);

	//	ERASE
	message("\nERASE\n");
	message("Erase item no. 2 from V3 \t");
	v3.erase(v3.begin() + 1);
	printv(v3,v3.size());

	//	PUSH BACK
	message("\nADD A NEW ITEM\n");
	message("Adding 'cuatro' to V3 \t");
	v3.push_back("cuatro");
	printv(v3, v3.size());

	//	POP BACK
	message("\nPOP BACK AN ITEM\n");
	message("Clearing last item from V3 \t");
	v3.pop_back();
	printv(v3, v3.size());

	//	EMPTY:	Checks if a vector is empty
	message("\nEMPTY ITEMS\n");
	message("Empty V1 and print\n");
	eraseV(v1);
	printv(v1, v1.size());

	//	CLEAR
	message("\nCLEAR ITEMS\n");
	message("Clear items from v2 and print\n");
	v2.clear();
	printv(v2, v2.size());

	//	COPY FROM OTHER VECTOR
	message("\nCOPY\n");
	message("Copying items from V3 to V4\n");
	message("V4 is\t");
	std::vector <std::string> v4(v3);
	printv(v4, v4.size());

	//	MOVE	
	message("\nMOVE ITEMS\n");
	message("Move V4 items to V5\n");
	message("Now V5 is\t");
	std::vector <std::string> v5(std::move(v4));
	printv(v5, v5.size());
	message("And V4 is\t");
	printv(v4, v4.size());

	return 0;
}
// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <stack>
#include <vector>

int main() {

	std::vector<std::string> v1 = { "un", "deux", "trois" };
	std::stack<std::string, std::vector<std::string>> s1(v1);

	// GENERAL INFO
	std::cout << "GENERAL INFO\n"
		<< "Size\t" << s1.size() << "\n"
		<< "Top\t" << s1.top() << "\n\n";

	// ADD MORE ITEMS
	std::cout << "ADDING MORE ITEMS\n";
	for (auto s : { "uno", "dos", "tres" })
		s1.push(s);
	std::cout << "Updated size\t" << s1.size() << "\n\n";

	// POP ALL ITEMS
	std::cout <<  "EMPTY STACK\nItems deleted:\t";
	while (!s1.empty()) {
		std::cout << s1.top() << " ";
		s1.pop();
	}
	std::cout << "\n";

	return 0;
}
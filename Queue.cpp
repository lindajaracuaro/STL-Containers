// STL Containers developed by Linda Pérez on August 2020
// 

#include<iostream>
#include<list>
#include<queue>
#include<string>

int main() {

	// LIST CREATION
	std::list<std::string> l1 = { "uno", "dos","tres" };
	std::list<std::string> l2 = { "un", "deux", "trois" };

	// QUEUE CREATION
	std::queue<std::string, std::list<std::string>> q1(l1);

	// GENERAL INFO
	std::cout << "GENERAL INFO\n"
		<< "Front item\t" << q1.front() << "\n"
		<< "Last item\t" << q1.back() << "\n"
		<< "Size\t\t" << q1.size() << "\n\n";

	// PUSH STRINGS TO A QUEUE
	std::cout << "PUSHING ITEMS\n";
	std::string s1 = "un";
	q1.push(s1);
	std::cout << "Front item\t" << q1.front() << "\n"
		<< "Last item\t" << q1.back() << "\n"
		<< "Size\t\t" << q1.size() << "\n\n";


	// EMPTY QUEUE
	std::cout << "EMPTY QUEUE\t";
	while (q1.empty() != 1) {
		std::cout << q1.front() << " ";
		q1.pop();
	}
	std::cout << "\n";
	std::cout 		<< "Size\t\t" << q1.size() << "\n\n";

	return 0;
}
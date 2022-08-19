#include <iostream>
#include <string>

int main()
{
	std::string str;

	std::cout << "Insert string: ";
	std::getline(std::cin, str);

	std::cout << "\nResults:\n";
	std::cout << "string: " << str << '\n';
	std::cout << "length: " << str.length() << '\n';
	std::cout << "first char: " << str.front() << '\n';
	std::cout << "last char: " << str.back() << '\n';
}
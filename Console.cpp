#include <iostream>
#include <string>

int main()
{
    std::string str;

    std::cout << "Insert string: ";
    std::getline (std::cin, str);

    std::cout << "\nResults:\n";
    std::cout << "string: " << str << '\n';
    std::cout << "length: " << str.length() << '\n';
    std::cout << "first char: " << str[0] << '\n';
    std::cout << "last char: " << str[str.length() - 1] << '\n';
}

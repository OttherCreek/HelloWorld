#include <iostream>
#include <string>

void printString(std::string& str) {
	std::cout << str << std::endl;
}

int main()
{
	std::string name = std::string("Cherno")+=" hello!";

	printString(name);


	std::cin.get();
}
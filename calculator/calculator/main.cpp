#include <iostream>

int main() {
	double number1, number2;
	std::string option;

	std::cout << "First: ";
	std::cin >> number1;
	std::cout << "Second: ";
	std::cin >> number2;
	std::cout << "What to do with these numbers? (+, -, *, /) ";
	std::cin >> option;

	if (option == "+") {
		std::cout << "Your number is: " << number1 + number2 << "\n\n";
	}
	else if (option == "-") {
		std::cout << "Your number is: " << number1 - number2 << "\n\n";
	}
	else if (option == "*") {
		std::cout << "Your number is: " << number1 * number2 << "\n\n";
	}
	else if (option == "/") {
		std::cout << "Your number is: " << number1 / number2 << "\n\n";
	}
	else {
		std::cout << "ERROR! Invalid option, please choose between +, -, *, / !";
	}

	return 0;
}
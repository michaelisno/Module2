#include <iostream>

int main() 
{
	int grade;

	std::cout << "Enter the Score:\n";
	std::cin >> grade;

	if (grade >= 80)
	{
		std::cout << "A*";
	}
	else if (grade >= 70)
	{
		std::cout << "A";
	}
	else if (grade >= 60)
	{
		std::cout << "B";
	}
	else if (grade >= 50)
	{
		std::cout << "C";
	}
	else if (grade >= 40)
	{
		std::cout << "D";
	}
	else if (grade >= 1)
	{
		std::cout << "F";
	}
	else
	{
		std::cout << "U";
	}

	return 0;
}
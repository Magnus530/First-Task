

#include <iostream>
#include <string>

/*Ask the user for their age, if ther user is 20 years or 
older
, print you are an adult.
If the user is younger than 20 then print-out you are a 
teenager
*/

int age;

int main()
{
	std::cout << "What is your age? : ";
	std::cin >> age;

	if (age >= 20)
	{
		std::cout << "You are an adult\n";
	}
	else if (age < 20)
	{
		std::cout << "You are a teenager\n";
	}
}


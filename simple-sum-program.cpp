#include <iostream>
#include <string>
using std::string;

int main ()
{
	std::cout << "Enter two numbers:" <<std::endl;	//Prompt the user to enter two numbers
	
	//Create variables for the two numbers
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	string stringVal1;
	int sum = 0;
	
	//Store the numbers
	std::cin >> val1;
	std::cin >> val2;
	std::cin >>stringVal1;
	std::cin >> val3;
	
	
	sum = val1 + val2 +val3;
	
	//Print each of the numbers
	std::cout << "The first number is: " << val1 <<std::endl;
	std::cout << "The second number is: " << val2 <<std::endl;
	std::cout << "The value of the string is: " <<stringVal1 << std::endl;
	std::cout << "The third number is: " << val3 <<std::endl;
	
	//Print the sum of the numbers
	std::cout <<"The sum of the numbers is: " << sum <<std::endl;
	
	return 0;
}
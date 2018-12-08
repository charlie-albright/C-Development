#include <iostream>

int main()
{
	
	//Sum the numbers from 1 through 10 inclusive.
	int sum = 0;
	int num = 1;
	while (num <=10){
		sum+= num;
		++num;
	}
	
	std::cout << "The sum of 1 to 10 inclusive is: " << sum <<std::endl;
	
	//Obtain two numbers from the user and sum through the numbers, inclusively.
	std::cout << "Enter two numbers to be summed inclusively: " << std::endl;
	
	int userVal1 = 0;
	int userVal2 = 0;
	
	std::cin >> userVal1;
	std::cin >> userVal2;
	
	int userValSum = 0;
	
	while (userVal1 <= userVal2){
		userValSum += userVal1;
		++userVal1;
	}
	
	std::cout << "Sum of user input values: " << userValSum << std::endl;
	
	//Obtain two numbers from the user and sum through the numbers, exclusively.
	std::cout << "Enter two numbers to be summed exclusively: " << std::endl;
	
	std::cin >> userVal1;
	std::cin >> userVal2;
	
	userValSum = 0;
	
	++userVal1;
	
	while (userVal1 < userVal2){
		userValSum += userVal1;
		++userVal1;
	}
	
	std::cout << "Sum of user input values: " << userValSum << std::endl;
	
	return 0;
}

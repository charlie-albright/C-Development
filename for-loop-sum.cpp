#include <iostream>

int main(){
	//Create a for loop to sum through the numbers 1 through to 10
	
	int sum = 0;
	
	for (int val1 =1; val1 <=10; ++val1)
		sum += val1;
	
	std::cout << "The sum of the numbers 1 through to 10 is: " << sum <<std::endl;
	
	
	sum = 0;
	for (int val1 = -100; val1 <=100; ++val1){
		sum +=val1;
	}
	
	std::cout << "The sum of the numbers -100 through to 100 is: " << sum <<std::endl;
	
	
	//Write a for loop that sums the numbers from two user obtained numbers
	
	std::cout << "Enter two numbers: " <<std::endl;
	
	int userVal1 = 0, userVal2 = 0;
	sum = 0;
	
	std::cin >> userVal1;
	std::cin >> userVal2;

	for (int counter = userVal1; counter <= userVal2 ; ++counter){
		sum += counter;
	}
	
	std::cout << "The sum of the numbers "<< userVal1 << " to " << userVal2 << " is " << sum <<std::endl;
	
	return 0;
}
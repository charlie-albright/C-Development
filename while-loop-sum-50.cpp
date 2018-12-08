#include <iostream>

int main(){
	//Write a program to sum the numbers from 50 to 100, inclusively.
	
	int val1 = 50;
	int val2 = 100;
	int sum = 0;
	
	while (val1 <= val2){
		sum += val1;
		++val1;	
	}
	
	std::cout << "The sum of numbers from: 50 to 100 is: " << sum << std::endl;
	return 0;
}
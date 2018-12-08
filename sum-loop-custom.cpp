#include <iostream>

int main(){
	//Calculate the sum of user entered values, using a while loop, with an unknown number of inputs
	int value = 0, sum = 0;
	
	while(std::cin >> value){
		sum += value;
	}

	std::cout << "The sum of the numbers is: " << sum <<std::endl;
	
	return 0;
}
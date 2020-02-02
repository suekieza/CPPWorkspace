#include <iostream>

int main(){
	
	int fav_num;
	std::cout << "Type Favorite number between 1 and 100: ";
	std::cin >> fav_num;
	std::cout << "Amazing, "; 
	std::cout << "thats my favorite number too!" << std::endl;
	std::cout << "No really, " << fav_num << " is my favorite number! :D" << std::endl;
	return 0;
}
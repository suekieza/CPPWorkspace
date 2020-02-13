#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int user_input {0};
	int cents {0};
	cout << "How many cents do you have?: ";
	cin >> user_input;
	cents = user_input;
	cout << "You have :" << cents << " Cents." << endl;
	long long int dollar {0};
	long long int quarter {0};
	long long int dime {0};
	long long int nickel {0};
	long long int penny {0};
	
	if(user_input == 0
	)
	{
		cout << "Dollar :" << dollar << endl; 
		cout << "Quarter :" << quarter << endl;
		cout << "Dime :" << dime << endl;
		cout << "Nickel :" << nickel << endl;
		cout << "Penny :" << penny << endl;
		}
	else
	{
		dollar = cents / 100;
		cout << "Dollar :" << dollar << endl;
		quarter = (cents - (dollar * 100)) / 25;
		cout << "Quarter :" << quarter << endl;
		dime = (cents - ((dollar * 100) + (quarter * 25))) / 10;
		cout << "Dime :" << dime << endl;
		nickel = (cents - ((dollar * 100) + (quarter * 25) + (dime * 10))) / 5;
		cout << "Nickel :" << nickel << endl;
		penny = (cents - ((dollar * 100) + (quarter * 25) + (dime * 10) + (nickel * 5))) / 1;
		cout << "Penny :" << penny << endl;
		}
	return 0;
}
#include <iostream>

using namespace std;

int main(){

	const double small_room_price{25};
	const double big_room_price{35};
	const double tax{0.06};
	const int days_valid{30};
	
	cout << "How many small room do you want cleaned?" << endl;
	int small_room {0};
	cin >> small_room;
	cout << "\nHow many big room do you want cleaned?" << endl;
	int big_room {0};
	cin >> big_room;
	cout << "\nPrice per small room: $" << small_room_price << endl;
	cout << "Price per big room: $" << big_room_price << endl;
	cout << "Total tax: $" << ((small_room_price * small_room) + (big_room_price * big_room)) * tax << endl;
	cout << "Total Estimate: $" << ((small_room_price * small_room) + (big_room_price * big_room)) + ((small_room_price * small_room) + (big_room_price * big_room)) * tax << endl;
	cout << "This estimate is valid for " << days_valid << endl;
	return 0;
}
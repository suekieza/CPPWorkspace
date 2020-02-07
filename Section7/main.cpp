// Section7

#include <iostream>
#include <vector>

using namespace std;

int main(){
//	vector <char> vowles{'a', 'o', 'u', 'i' , 'e'};
//	cout << vowles[0] << endl;
//	cout << "Bla" << endl;
//	
//	vector <int> test_score{100,98,89};
//	
//	cout << test_score.at(0) << endl;
//	cout << test_score.size() << endl;
//	
//	cin >> test_score.at(0);
//	
//	vector <vector <int>> movie_ratings
//	{
//		{0},
//		{0},
//		{0}
//	};
//	cout << movie_ratings.at(0).at(0) << endl;

	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	//display
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << vector1.size() << endl;
	
	vector2.push_back(100);
	vector2.push_back(200);
	
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << vector2.size() << endl;
	
	vector <vector <int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;
	
	vector1.at(0) = 1000;
	
	cout << "Changed" << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;
	
	cout << vector1.at(0) << endl;
	
	
	return 0;
}
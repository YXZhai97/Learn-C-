#include<iostream>
using namespace std;

int main() {

	int score = 0;
	cout << "please enter the grade:" << endl;
	cin >> score;
	if (score >= 600)
	{
		cout << "congratulations" << endl;
	}
	else
	{
		cout << "Not entering BIT" << endl;
	}

	return 0;
}
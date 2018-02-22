#include <iostream>
#include <string>
using namespace std;
bool base2;
double base10;
double num1;
double num2;
double num3;
double num4;
double num5;

int main() {

	cout << "input  number 1 in binary form" << endl;
	cin >> num1;
	cout << "input  number 2 in binary form" << endl;
	cin >> num2;
	cout << "input  number 3 in binary form" << endl;
	cin >> num3;
	cout << "input  number 4 in binary form" << endl;
	cin >> num4;
	cout << "input  number 5 in binary form" << endl;
	cin >> num5;
	cout << num1 * 16 + num2 * 8 + num3 * 4 + num4 * 2 + num5 * 1;
	cout << " " << endl;
	system("pause");
}
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int number, digit=0;
	cout << "Please enter a number: ";
	cin >> number;

	while (number > 0) {
		cout << number % 2<<endl;
		number /= 2;
	}
}
#include <iostream>
using namespace std;

unsigned int power (unsigned int base, unsigned int exponent);

int main () {
	unsigned int b, e;
	cout << "Enter base and exponent: ";
	cin >> b >> e;
	cout << power(b, e) << endl;
	return 0;
}

unsigned int power (unsigned int base, unsigned int exponent) {
	if (base == 0)
		return 0;
	if (exponent == 0)
		return 1;
	return base * power(base, exponent - 1);
}
#include<iostream>
#include<cmath>
using namespace std;

double hypotenuse(int x, int y);

int main() {
	int x;
	int y;

	cout << "enter side 1 of triangle" << endl;
	cin >> x;
	cout << "enter side 2 of triangle" << endl;
	cin >> y;
	cout << "The hypontenuse of triangle is " << hypotenuse(x, y) << endl;
}

double hypotenuse(int x, int y) {
	double h = pow(x, 2) + pow(y, 2);
	return sqrt(h);
}

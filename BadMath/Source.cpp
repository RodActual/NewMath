#include <iostream>
#include <iomanip>
using namespace std;

float average(int n1, int n2, int n3)
{
	float a = (n1 + n2 + n3) / 3;

	cout << setprecision(2) << fixed << "The average is " << a << endl;

	return a;
}

int main(float a)
{
	int n1, n2, n3;

	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3;

	average(n1, n2, n3);

	return 0;
}
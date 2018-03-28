#include<iostream>


using namespace std;

int main()

{

	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;

	cout << "Enter a number, please! \n"
	cin >> a;

	cout << "Enter another number... \n";
	cin >> b;

	c = a + b;
	cout << "the sum of those numbers is " << c << endl;



	d = a - b;
	cout << "the difference of those numbers is " << d << endl;


	e = a * b;
	cout << "the product of those numbers is " << e << endl;


	f = a / b;
	cout << "the quotient of those numbers is "<< f << endl;


	g = a % b;
	cout << g << endl;


	return 0;

}
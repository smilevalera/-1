#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int R1, R2,  b;
	double  R, a ;
	cin >> R1 >> R2;
	a = (R1 * R2) ;
	b = (R1 + R2);
	R = a / b;
	cout << "R =" << R << endl;
	return 0;
}
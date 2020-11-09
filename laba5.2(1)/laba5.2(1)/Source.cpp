#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

void A(const double x, const double n, double& a);

void S(const double x, const double eps, int& n, double& s);


int main()
{
	double x, xk, xp, eps, s = 0, dx;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "exp(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (xp <= xk)
	{
		S(x, eps, n, s);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << exp(x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}

	cout << "-------------------------------------------------" << endl;

}
void S(const double x, const double eps, int& n, double& s)
{
	n = 0;
	double a = 1 / x;
	s = a;

	do
	{
		n++;
		A(x, n, a);
		s += a;

	} while (abs(a) >= eps);
}void A(const double x, const double n, double& a)
{
	double R = ((2 * n) - 1) / 2 * ((x * x) * n) + (x * x);
	a *= R;
}
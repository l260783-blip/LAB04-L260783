/*	E1 = a + b * c - a / b;
E2 = a > b == c > b;
E3 = a > b && b > c || a == c;
E4 = !(a < b) && c % 2 == 0;
E5 = a % b * c; */
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, n, E1, E2, E3, E4, E5, x, p, q, count = 0;
	cout << "Enter a (1-20) : ";
	cin >> a;
	cout << "Enter b (1-20) : ";
	cin >> b;
	cout << "Enter c (1-20) : ";
	cin >> c;
	cout << "Enter n (0-100) : ";
	cin >> n;
	if (a >= 1 && a <= 20 && b >= 1 && b <= 20 && c >= 1 && c <= 20)
	{
		if (n >= 0 && n < +100)
		{
			if (a > b || count++ > 0)
			{
				E1 = a + b * c - a / b;
				E2 = a > b == c > b;
				E3 = a > b && b > c || a == c;
				E4 = !(a < b) && c % 2 == 0;
				E5 = a % b * c;
				cout << "E1: a + b * c - a / b = " << E1;
				cout << "\nE2 : a > b == c > b = " << E2;
				cout << "\nE3 : a > b && b > c || a == c = " << E3;
				cout << "\nE4 : !(a < b) && c % 2 == 0" << E4;
				cout << "\nE5 : a % b * c = " << E5;
				x = n;
				cout << "\nx++ gives : " << x++ << ",then x = " << x;
				x = n;
				cout << "\n++x gives : " << ++x << ",then x = " << x;
				x = n, p = x++ + 5,
					cout << "\np =  " << p << ", x = " << x;
				x = n, q = ++x + 5;
				cout << "\nq =  " << q << ", x = " << x;
				cout << "\ncondition : " << (a > b || count++ > 0) << ", count = " << count;
			}
		}
	}
	return 0;

}
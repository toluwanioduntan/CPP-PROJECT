#include<iostream>
using namespace std;
int main()
{

	int x, n;
	cout << "x enter value " << endl;
	cin >> x;
	cout << "n enter value" << endl;
	cin >> n;

	int y = 0;
	for (int i = 1; i < 2 * n; i++)

	{
		if (i != 0) {
			if (i % 2 == 0) {
				y *= (x - 2 * n);
			}
			else {
				y = x + n;
			}
		}

	}
	cout << "result" << y << endl;
	return 0;

}

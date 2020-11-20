#include <iostream>
using namespace std;
int main()
{
	int n,x,i;
	double y;
	cout << "Input n= ";
	cin>>n;
	cout << "Input x= ";
	cin >> x;
	 
	{ y = 1;
	for (int i=1; i <= n; i++)
		y*= x+i;
		cout << " The value of y is =  " << y;
		return 0;
	}



}
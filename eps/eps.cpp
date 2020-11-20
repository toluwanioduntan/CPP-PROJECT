#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double eps, y = 0;
    int n;
    cout << " Input value of eps= ";
    cin >> eps;
    cout << " Input value of n= ";
    cin >> n;
    int i = 1;
    if (eps > 0.5)
        cout << "Error!";
    else if (eps <= 0.5)
    { 
        while (1 / pow(2, i) > eps)
        {
            y += 1 / pow(2, i);
            i++;
        }
        
    }
    cout << "y=  " << y;
    return 0;
}

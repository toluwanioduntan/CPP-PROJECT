#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double a, b, c, x1,x2;

    cout << " input a=";
    cin >> a;
    cout << " input b=";
    cin >> b;
    cout << " input c=";
    cin >> c;
    if (a == 0)
    {
        cout << "Undefined";
    }
    else if (a != 0, b * b - 4 * a * c > 0)
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << " The roots are x1=" << x1 << " and x2= " << x2;
    }
    if (b * b - 4 * a * c == 0)
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x1 = x2=  " << x1;
    }
    else if (b * b - 4 * a * c < 0)
    return 0;

}

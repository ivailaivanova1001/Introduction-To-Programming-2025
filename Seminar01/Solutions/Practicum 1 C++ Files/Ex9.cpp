#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    double D = (b*b) - (4*a*c);
    double x1 = ((b*(-1)) + sqrt(D))/2;
    double x2 = ((b*(-1)) - sqrt(D))/2;

    cout << "x1 = " << x1 << ", x2 = " << x2;
    
    return 0;
}
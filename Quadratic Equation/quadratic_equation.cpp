#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    float x1, x2;

    cout << "Enter the value of a, b and c: ";
    cin >> a >> b >> c;
    x1 = (-b + sqrt(b*b - 4*a*c))/2*a;
    x2 = (-b - sqrt(b*b - 4*a*c))/2*a;

    if(isnan(x1) || isnan(x2))
        cout << "Factors are imaginary." << endl;
    else
        cout << "The value of x is either " << x1 << " or " << x2 << endl;
    return 0;
}

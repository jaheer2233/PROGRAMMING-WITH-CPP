#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i;
    long long l;
    char c;
    float f;
    double d;

    // Input
    cin >> i >> l >> c >> f >> d;

    // Output
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;

    // Set precision for float
    cout << fixed << setprecision(3) << f << endl;

    // Set precision for double
    cout << fixed << setprecision(6) << d << endl;

    return 0;
}


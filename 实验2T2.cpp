//2.
#include <iostream>
using namespace std;
int main()
{
    float x;
    cin >> x;
    if (x > 0 && x < 1) { cout << 3 - 2*x << endl; }
    else if (x >= 1 && x < 5) { cout << 1 / x * 2 / 4 + 1; }
    else if (x >= 5 && x < 10) { cout << x * x << endl; }
    return 0;
}

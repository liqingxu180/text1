//8.
#include<iostream>
using namespace std;
int main()
{
    double a,x;
    double b;
    cout << "请输入一个数字" << endl;
    cin >> a;
    x = a;
    do {
        b = x;
        x = (1.0 / 2) * (x + a / x);

    } while (fabs(x - b) >= 0.00001);
    cout << "该数的平方根是" << x << endl;
    return 0;
}

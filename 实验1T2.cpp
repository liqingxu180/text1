//2.
#include <iostream>
#define PI  3.14
using namespace std;
int main()
{
    cout << "请输入圆锥底的半径" << endl;
    float r;
    cin >> r;
    cout << "请输入圆锥的高" << endl;
    float h;
    cin >> h;
    float V;
    V = PI * r * r * h / 3;
    cout << "圆锥的体积是" << V << endl;

}

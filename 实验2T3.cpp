//3.
#include<iostream>
using namespace std;
int main() {
    double a, b, c;
    int C;
    do {
        cout << "请输入三角形的三边" << endl;
        cin >> a >> b >> c;
        if (a + b <= c || a + c <= b || b + c <= a) { cout << "您输入的三边有误，请重新输入" << endl; }
    } while (a + b <= c || a + c <= b || b + c <= a);
    C = a + b + c;
    cout << "三角形的周长是" << C << endl;
    if (a == b || b == c || a == c) { cout << "这是一个等腰三角形" << endl; }
    else { cout << "这不是一个等腰三角形" << endl; }
    return 0;
}

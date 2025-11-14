//4.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cout << "请输入您要进行的运算" << endl;
    cin >> a >> c >> b;
    switch (c) {
    case '+':cout << a + b << endl; break;
    case'-':cout << a - b << endl; break;
    case'*':cout << a * b << endl; break;
    case'/':if (b == 0) { cout << "除数不能为0" << endl; }
           else { cout << a / b << endl; }
           break;
    case'%':if (b == 0) { cout << "除数不能为0" << endl; }
           else { cout << a % b << endl; }
           break;
    default:cout << "您输入的运算符不合法" << endl;
    }
    return 0;
}

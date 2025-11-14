//6.
#include<iostream>
using namespace std;
int min(int x, int y) {
    int z;
    if (x > y)z = y;
    else z = x;
    return z;
}
int max(int x, int y) {
    int z;
    if (x > y)z = x;
    else z = y;
    return z;
}

int main() {
    cout << "请输入两个正整数" << endl;
    int a, b;
    cin >> a >> b;
    while (a <= 0 || b <= 0) {
        cout << "您输入的不是正整数，请重新输入" << endl;
        cin >> a >> b;
    }
    int i, j;
    for (i = min(a, b); i >= 1; --i)

    {
        if (a % i == 0 && b % i == 0) {
            cout << "最大公约数是" << i << endl;
            break;
        }
    }
    for (i = max(a, b); true; ++i)
        if (i % a == 0 && i % b == 0) {
            {
                cout << "最小公倍数是" << i << endl;
                break;
            }
        }

}

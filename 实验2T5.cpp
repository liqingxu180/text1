//5.
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
    string a;
    cout << "请输入要判断的字符串" << endl;
    getline(cin, a);
    int b{ 0 }, c{ 0 }, d{ 0 }, e{ 0 };
    for (size_t i = 0; i < a.length(); ++i)
    {unsigned char ur = static_cast<unsigned char>(a[i]);
    
        if (ur >= 48 && ur <= 57) { ++b; }
        else if (ur >= 65 && ur <= 90 || ur >= 97 && ur <= 122) { ++c; }
        else if (ur == 32) { ++d; }
        else { ++e; }
        
    }
    cout << "英文字母的个数是" << c << endl << "空格的个数是" << d << endl << "数字字符的个数是" << b << endl << "其他字符的个数是" << e << endl;

}

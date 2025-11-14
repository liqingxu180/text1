//4.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    unsigned int textUnint = 65534;//0xfffe
    cout << "output in unsigned int 1 type:" << textUnint << endl;//<<oct;
    cout << "output in char type:!" << static_cast<char>(textUnint) << endl;//
    cout << "output in short type:" << static_cast<short>(textUnint) << endl;//
    cout << "output in int type:" << static_cast<int>(textUnint) << endl;//
    cout << "output in double type:" << static_cast<double>(textUnint) << endl;//
    cout << "output in double type:" << setprecision(4) << static_cast<double>(textUnint) << endl;
    cout << "output in Hex unsigned type:" << hex << textUnint << endl;//16½øÖÆÊä³ö
    system("pause");
    return 0;
}

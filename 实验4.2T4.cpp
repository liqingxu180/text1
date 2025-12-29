//สตั้4.2_4
#include <iostream>
using namespace std;
int* f() {
    int* p = new int[4] { 1,2,3,4 };
    return p;
}
int main() {
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    return 0;
}
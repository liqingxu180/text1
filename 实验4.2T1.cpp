//实验4.2_1
#include <iostream>
int main() {//void改成int,并增加return 0
    int i, j, * pi, * pj;//定义整数型变量i,j并定义指向整型变量的指针pi,pj
    pi = &i;
    pj = &j;
    i = 5;
    j = 7;
    std::cout << i << "\t" << j << '\t' << pi << "\t" << pj << std::endl;
    std::cout << &i << "\t" << *&i << "\t" << &j << "\t" << *&j;
    return 0;
}
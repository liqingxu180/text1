//9.
#include <iostream>
int main() {
    double days, num, all,ave;
    for(days=1,num=2,all=0;num<=100;++days,num*=2)
    {
        all = all + num * 0.8;
    }
    ave = all / (days-1);
    std::cout << "每天平均花" << ave << "块钱" << std::endl;
    return 0;
}

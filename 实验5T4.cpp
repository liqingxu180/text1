#include <iostream>
class Student {
private:
    int grade;
public:
    long int xh;
    void getdata(long int a, int b) {
        xh = (a > 10000000 && a <= 999999999) ? a : 100000001;
        grade = (b >= 0 && b <= 750) ? b : 0;
    }
    int getgrade();
};
int Student::getgrade() {
    return grade;
}
void max(Student* stu) {
    int max = 0;
    int m = 0;
    for (int i = 0; i < 5; i++) {
        int t = stu[i].getgrade();
        if (t >= max) {
            m = i; max = t;
        }
    }
    Student* stum = &stu[m];
    std::cout << stum->xh << std::endl;
}
int main() {
    Student stu[5];
    int b;
    long int a;
    for (int i = 0; i < 5; i++) {
        std::cin >> a >> b;
        stu[i].getdata(a, b);
    }
    max(stu);
    return 0;
}

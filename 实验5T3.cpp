#include<iostream>
class Cuboid {
private:
    int a, b, h;
    int v;
public:
    void Volume();
    void get(int a1, int b1, int h1);
    void showVolume();
};
void Cuboid::Volume() {
    v = a * b * h;
}
void Cuboid::get(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    h = c1;
}
void Cuboid::showVolume() {
    std::cout << "该长方体的体积是" << v << std::endl;
}
int main() {
    Cuboid cu1;
    Cuboid cu2;
    Cuboid cu3;
    int a1, a2, a3;
    for (int i = 0; i < 3; i++) {
        std::cin >> a1 >> a2 >> a3;
        if (i == 0) {
            cu1.get(a1, a2, a3);
            cu1.Volume();
            cu1.showVolume();
        }
        else if (i == 1) {
            cu2.get(a1, a2, a3);
            cu2.Volume();
            cu2.showVolume();
        }
        else {
            cu3.get(a1, a2, a3);
            cu3.Volume();
            cu3.showVolume();
        }
    }
    return 0;
}
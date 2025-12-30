#include <iostream>
class Point {
private:
    int x, y;
public:
    Point(int x = 60, int y = 80) {
        this->x = x;
        this->y = y;
    }
    void setPoint(int i, int j);
    void display();
};
void Point::setPoint(int i, int j) {
    x = x + i;
    y = y + j;
}
void Point::display() {
    std::cout << "(" << x << "," << y << ')' << std::endl;
}
int main() {
    int i, j;
    std::cin >> i >> j;
    Point p1;
    p1.setPoint(i, j);
    p1.display();
    return 0;
}
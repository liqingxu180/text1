#include <iostream>
using namespace std;
class Time {
private:
    int hour;
    int minute;
    int sec;
public:
    Time() {
        hour = (hour > 0 && hour < 24) ? hour : 0;
        minute = (minute > 0 && minute < 60) ? minute : 0;
        sec = (sec > 0 && sec < 60) ? sec : 0;
    }
    void setTime(int a, int b, int c) {
        hour = a;
        minute = b;
        sec = c;
    }
    void showTime() {
        cout << hour << ": " << minute << ": " << sec << endl;
    }
};
int main() {
    Time t1;
    int a, b, c;
    cin >> a >> b >> c;
    t1.setTime(a, b, c);
    t1.showTime();
    return 0;
}
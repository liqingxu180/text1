#pragma once
class Student {
public:
	void display();
	void set_value(int a, const char b[20], char c);
private:
	int num;
	char name[20];
	char sex;
}
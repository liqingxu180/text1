#include <iostream>
#include "student.h"
void Student::display() {
	std::cout << "num: " << num << std::endl;
	std::cout << "name: " << name << std::endl;
	std::cout << "sex: " << sex << std::endl;
}
void Student::set_value(int a, const char b[20], char c) {
	num = a;
	for (int i = 0; i < 20; i++) {
		name[i] = b[i];
	}
	sex = c;
}
#pragma once
#include <iostream>
using namespace std;
class Student
{private:
	string name;
	string fathername;
	string surname;
	int* math = new int[0];
	int mathSize = 0;
	int* rus =new int[0];
	int rusSize = 0;
	int* phys =new int[0];
	int physSize = 0;
public:
	Student(string name, string fathername, string surname) {
		this->name = name;
		this->fathername = fathername;
		this->surname = surname;
	}
	~Student() {
		delete[]math;
		delete[]rus;
		delete[]phys;
	}
	void addMathmark (int mark) {
		int* buf = new int[mathSize + 1];
		for (int i = 0; i < mathSize; i++) {
			buf[i] = math[i];
		}
		buf[mathSize] = mark;
		delete[]math;
		math = buf;
		mathSize++;
	}
	void addRusmark(int mark) {
		int* buf = new int[rusSize + 1];
		for (int i = 0; i < rusSize; i++) {
			buf[i] = rus[i];
		}
		buf[rusSize] = mark;
		delete[]rus;
		rus = buf;
		rusSize++;
	}
	void addPhysmark(int mark) {
		int* buf = new int[physSize + 1];
		for (int i = 0; i < physSize; i++) {
			buf[i] = phys[i];
		}
		buf[physSize] = mark;
		delete[]phys;
		phys = buf;
		physSize++;
	}
	void changeMathmark(int mark, int index) {
		if (index >= 0 && index < mathSize) {
			math[index] = mark;
		}
	}
	void changeRusmark(int mark, int index) {
		if (index >= 0 && index < rusSize) {
			rus[index] = mark;
		}
	}
	void changePhysmark(int mark, int index) {
		if (index >= 0 && index < physSize) {
			phys[index] = mark;
		}
	}
	void showInfo() {
		cout << name << " " << fathername << " " << surname<<" ";
		for (int i = 0; i < mathSize; i++) {
			cout << math[i] << " ";
		}
		cout << "|";
		for (int i = 0; i < rusSize; i++) {
			cout << rus[i] << " ";
		}
		cout << "|";
		for (int i = 0; i < physSize; i++) {
			cout << phys[i] << " ";
		}
		cout << endl;
	}
};


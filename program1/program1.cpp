#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student st1("D.", "P.", "Ivanov");
    Student st2("E.", "G.", "Petrova");
    Student st3("O.", "V.", "Semenov");
    st1.addMathmark(3);
    st1.addMathmark(3);
    st1.addMathmark(4);
    st1.addRusmark(5);
    st1.addRusmark(4);
    st1.addRusmark(5);
    st1.addPhysmark(4);
    st1.addPhysmark(4);
    st1.addPhysmark(3);
    st1.showInfo();
    st2.addMathmark(5);
    st2.addMathmark(5);
    st2.addMathmark(4);
    st2.addRusmark(2);
    st2.addRusmark(4);
    st2.addRusmark(3);
    st2.addPhysmark(4);
    st2.addPhysmark(4);
    st2.addPhysmark(4);
    st2.showInfo();
    st3.addMathmark(3);
    st3.addMathmark(3);
    st3.addMathmark(2);
    st3.addRusmark(5);
    st3.addRusmark(5);
    st3.addRusmark(5);
    st3.addPhysmark(5);
    st3.addPhysmark(4);
    st3.addPhysmark(2);
    st3.showInfo();
    cout << endl;
    st1.changeMathmark(5, 1);
    st1.showInfo();
    st2.changeRusmark(5, 0);
    st2.showInfo();
    st3.changePhysmark(5, 2);
    st3.showInfo();
}


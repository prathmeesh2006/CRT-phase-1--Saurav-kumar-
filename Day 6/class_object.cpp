#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll_no;
};

int main()
{
    Student s1;
    s1.name = "Prathmesh";
    s1.roll_no = 2024;
    cout << "Name: " << s1.name << ", Roll No: " << s1.roll_no << endl;
    return 0;
}

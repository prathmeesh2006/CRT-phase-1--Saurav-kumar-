#include <iostream>
using namespace std;
class Students
{
public:
    string name;
    int roll;

    Students(string n, int roll)
    {
        name = n;
        this->roll = roll;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
    }
};
int main()
{
    Students s1("Prathmesh", 21);
    s1.show();

    return 0;
}
// Copy constructor
//C++ program

#include <iostream>
using namespace std;

class Code
{
    int a, b;

public:
    Code()
    {
        a = 10;
        b = 20;
    }

    Code(Code &i); // copy constructor

    void display(void)
    {

        cout << "a = " << a << "b= " << b << endl;
    }
};
Code::Code(Code &i)
{
    a = i.a;
    b = i.b;
}
int main()
{
    Code c1, c2(c1);
    cout << "first object \n";
    c1.display();
    cout << "second object \n";
    c2.display();
    cout << "third object. \n";
    Code c3 = c2;
    c3.display();
}

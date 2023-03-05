
// C++ program to illustrate
// parameterized constructors
#include <iostream>
using namespace std;
 
class Test {
private:
    int x, y;
 
public:
    // Parameterized Constructor
    Test(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
 
    int getX() { return x; }
    int getY() { return y; }
};
 
int main()
{
    // Constructor called
    Test p1(10, 15);
 
    // Access values assigned by constructor
    cout << "p1.x = " << p1.getX()
         << ", p1.y = " << p1.getY();
 
    return 0;
}

#include <iostream>
using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "Base1 Default Constructor\n";
    }

    Base1(int x)
    {
        cout << "Base1 Parameterized Constructor: " << x << endl;
    }

    Base1(const Base1 &b)
    {
        cout << "Base1 Copy Constructor\n";
    }

    ~Base1()
    {
        cout << "Base1 Destructor\n";
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Base2 Default Constructor\n";
    }

    Base2(int y)
    {
        cout << "Base2 Parameterized Constructor: " << y << endl;
    }

    Base2(const Base2 &b)
    {
        cout << "Base2 Copy Constructor\n";
    }

    ~Base2()
    {
        cout << "Base2 Destructor\n";
    }
};

class Derived : public Base1, public Base2
{
public:
    Derived() : Base1(), Base2()
    {
        cout << "Derived Default Constructor\n";
    }

    Derived(int x, int y) : Base1(x), Base2(y)
    {
        cout << "Derived Parameterized Constructor\n";
    }

    Derived(const Derived &d) : Base1(d), Base2(d)
    {
        cout << "Derived Copy Constructor\n";
    }

    ~Derived()
    {
        cout << "Derived Destructor\n";
    }
};

int main()
{
    cout << "\nCreating object using Default Constructor:\n";
    Derived d1;

    cout << "\nCreating object using Parameterized Constructor:\n";
    Derived d2(10, 20);

    cout << "\nCreating object using Copy Constructor:\n";
    Derived d3(d2);

    cout << "\nEnd of Program\n";

    return 0;
}
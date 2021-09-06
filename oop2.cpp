#include <iostream>
#include <memory>

using namespace std;

class TestClass
{
public:
    TestClass() : x_(0)
    {
        cout << "Default Constructor. x = " << x_ << endl;
    }

    TestClass(int x) : x_(x)
    {
        cout << "Single argument constructor. x = " << x_ << endl;
    }

    TestClass(const TestClass &other) : x_(other.x_)
    {
        cout << "Copy constructor. x = " << x_ << endl;
    }

    TestClass & operator =(const TestClass &other)
    {
        x_ = other.x_;
        cout << "Copy assignment. x = " << x_ << endl;
        return *this;
    }

    ~TestClass()
    {
        cout << "Destructing object. x = " << x_ << endl;
    }

    int getX()
    {
        return x_;
    }
private:
    int x_;
};


int main() {
    TestClass *ptr = new TestClass();
    // RAII
    cout << "First" << endl;
    {
        auto u_ptr = make_shared<TestClass>(23);
        auto u_ptr2 = u_ptr;

    }
    cout << "Second" << endl;
    return 0;
}

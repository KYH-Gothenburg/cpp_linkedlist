#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person() : name_("No Name") {}  // Default constructor
    Person(string name) : name_(name) {}  // Single argument constructor
    Person(const Person &other) : name_(other.name_) {} // Copy constructor

    ~Person()
    {
        cout << name_ << " is destructed." << endl;
    }

    Person& operator = (const Person &other) // Copy assignment operator
    {
        name_ = other.name_;
        return *this;
    }
    string getName()
    {
        return name_;
    }
    void setName(string name)
    {
        name_ = name;
    }
private:
    string name_;
};



int main() {
    for (int i = 0; i  < 10; i++)
    {}
    cout << i << endl;
    return 0;
}

#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
    // Default constructor
    Node();
    // Single argument constructor
    explicit Node(T data);
    // Two argument constructor
    Node(T data, Node<T> *next);
    // Destructor
    ~Node();

    // Getters and setters
    T getData();
    void setData(T data);

    Node<T> *getNext();
    void setNext(Node<T> *next);
private:
    T data_;
    Node<T> *next_;
};

template<typename T>
Node<T>::Node(): data_(T()), next_(nullptr) {}

template<typename T>
Node<T>::Node(T data) {

}

template<typename T>
Node<T>::Node(T data, Node<T> *next) {

}

template<typename T>
Node<T>::~Node() {

}

template<typename T>
T Node<T>::getData() {
    return nullptr;
}

template<typename T>
void Node<T>::setData(T data) {

}

template<typename T>
Node<T> *Node<T>::getNext() {
    return nullptr;
}

template<typename T>
void Node<T>::setNext(Node<T> *next) {

}

template<typename T>
class LinkedList
{
public:
    // Default constructor
    LinkedList();
    // Copy constructor
    LinkedList(const LinkedList<T> &other);
    // Destructor
    ~LinkedList();

    // Operators

    // Copy assignment
    LinkedList<T> & operator = (const LinkedList<T> &other);
    // Subscript operator
    T operator [](int index);
    // ostream operator
    friend ostream & operator <<(ostream &os, const LinkedList<T> &list);

    // Methods like push, pop, and clear
    // **** ADD THEM! *****

    // Getters and setters
    // **** ADD THEM ****
private:
    Node<T> *head_;
    Node<T> *tail_;
    int size;
};

template<typename T>
LinkedList<T>::LinkedList() {

}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &other) {

}

template<typename T>
LinkedList<T>::~LinkedList() {

}

template<typename T>
LinkedList<T> &LinkedList<T>::operator=(const LinkedList<T> &other) {
    return <#initializer#>;
}

template<typename T>
T LinkedList<T>::operator[](int index) {
    return nullptr;
}

template<typename T>
ostream &operator<<(ostream &os, const LinkedList<T> &list) {
    return <#initializer#>;
}

int main() {
    LinkedList<int> intList;
    LinkedList<double> doubleList;
    return 0;
}

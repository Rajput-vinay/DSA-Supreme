#include <iostream>
using namespace std;

class Animal
{
private:
    int age;
    int weight;

public:
    void eat()
    {
        cout << "Eating" << endl;
    }
    void getAge()
    {
        return this->Age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
}
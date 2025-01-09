#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

    int getHeight()
    {
        return this->height;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    int getAge()
    {
        return this->age;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    int getWeight()
    {
        return this->weight;
    }

    void setWeight(int weight)
    {
        this->weight = weight;
    }
};

class Male : public Human
{
public:
    string color;

    void setColor(string color)
    {
        this->color = color;
    }

    string getColor()
    {
        return this->color;
    }

    void sleep()
    {
        cout << "Sleeping" << endl;
    }
};

int main()
{
    Male m;
    m.setAge(10);
    m.setHeight(20);
    m.setWeight(30);
    m.setColor("Dark");

    cout << "Age : " << m.getAge() << endl;
    cout << "Height : " << m.getHeight() << endl;
    cout << "Weight : " << m.getWeight() << endl;
    cout << "Color : " << m.getColor() << endl;
}
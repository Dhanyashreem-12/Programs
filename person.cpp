#include <string>
#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    Person(string name, int age, string address) {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setAddress(string address) {
        this->address = address;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    string getAddress(){
        return address;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Person person1("John Smith", 30, "123 Main St.");
    person1.display();

    person1.setAge(31);
    person1.display();

    return 0;
}


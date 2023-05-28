#include <string>
#include <iostream>

using namespace std;

class Person {

    string name;
    int age;

public:
    
    //setter - getter method 
    void sgName() {
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;        
    }

    void sgAge() {
    cout<<"Enter your age"<<endl;
    cin>>age;
    cout<<"Your age is "<<age<<endl; 
    }
};

int main() {
        
    Person obj;

    obj.sgName();
    obj.sgAge();    

    return 0;
}


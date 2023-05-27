#include<iostream>
using namespace std;

class Animal{
	public:
		void speak(){
			cout << "animal speaks" << endl;
		}
};

class Mammal{
	public:
		void sleeps(){
			cout << " mammals sleeps" <<endl;
		}
};

class Dog : public Animal,public Mammal{
	public:
		void barks(){
			cout << "Dog barks" << endl;
		}
};

int main(){
	Dog dog;
	dog.speak();
	dog.sleeps();
	dog.barks();
	return 0;
}

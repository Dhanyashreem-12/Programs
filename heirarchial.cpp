#include<iostream>
using namespace std;

class Animal{
	public:
		void MakeSound(){
			cout << "Animal make sound" <<endl;
		}
};

class Dog : public Animal{
	public:
		void MakeSound(){
			cout << "Dog barks" << endl;
		}
};

class Cat : public Animal{
	public:
		void MakeSound(){
			cout << "cat meows" << endl;
		}
};

int main(){
	Dog dog;
	Cat cat;
	
	dog.MakeSound();
	cat.MakeSound();
	
	dog.Animal::MakeSound();
	cat.Animal::MakeSound();
	
	return 0;
}

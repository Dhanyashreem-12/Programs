#include <iostream>

using namespace std;

template<typename T>
class Smallest {
public:
    T findSmallest(T a, T b) {
        return (a < b) ? a : b;
    }
};

int main() {
    
    Smallest<int> obj1;

     int a = 5, b = 10;
     cout << "Smallest of " << a << " and " << b << " is: " << obj1.findSmallest(a, b) <<  endl;

    Smallest<float> obj2;

    float x = 3.14, y = 2.71;
     cout << "Smallest of " << x << " and " << y << " is: " << obj2.findSmallest(x, y) <<  endl;

    return 0;
}

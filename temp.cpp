#include <iostream>

using namespace std;

template<typename T>
T Max(T a, T b) {
    return a > b ? a : b;
}

int main() {
    int x = 5;
    int y = 10;
    double a = 3.14;
    double b = 2.71;
    
    cout << "Max of " << x << " and " << y << " is " << Max(x, y) << endl;
    cout << "Max of " << a << " and " << b << " is " << Max(a, b) << endl;

    return 0;
}

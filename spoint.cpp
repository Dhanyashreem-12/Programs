#include <iostream>

using namespace std;
//using namespace ios;

int main() {
    float value = 2.05;
    cout<<sizeof(value)<<endl;
    // Enable showpoint flag
    cout.precision(2);
    cout.setf(ios::showpoint);
	
    // Output the value with showpoint enabled
    cout<<value<<endl;

    return 0;
}

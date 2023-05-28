#include <iostream>
#include <string>

using namespace std;

class MyString {
private:
     string data;

public:
    MyString() : data("") {}
    MyString(const  string& str) : data(str) {}

    MyString operator-(const MyString& other) {
        // Implement your custom subtraction logic here
        MyString result;
        // Example: Delete all occurrences of other.data in data
        result.data = data;
        size_t pos = result.data.find(other.data);
        while (pos !=  string::npos) {
            result.data.erase(pos, other.data.length());
            pos = result.data.find(other.data);
        }
        return result;
    }

    void display() {
         cout << data <<  endl;
    }
};

int main() {
    MyString str1("HelloWorld");
    MyString str2("llo");
    MyString str3 = str1 - str2; // Using operator-

    str3.display(); // Output: Hed

    return 0;
}

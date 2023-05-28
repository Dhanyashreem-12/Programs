#include <stdio.h>
int main() {
// create variables
char operator = '+';
int num1 = 18;
int num2 = 7;
// using variables in ternary operator
int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
printf("%d", result);
return 0;
}

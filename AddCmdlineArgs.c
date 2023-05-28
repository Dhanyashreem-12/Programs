#include<stdio.h>
#include<stdlib.h>

void main(int args[], char* argv[]){
int num1, num2, sum=0;

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

sum = num1+num2;

printf("%d", sum);
}

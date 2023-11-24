#include<stdio.h>
int main(void){
char ch;
double num1, num2;
printf("Enter an operator Such ('+' '-' '*' '/'): ");
scanf("%c", &ch);
printf("Enter two random number: ");

scanf("%lf %lf", &num1,&num2);

switch(ch){

case '+':

    printf("Sum of two number is %lf+%lf = %lf", num1, num2, num1+num2);
break;

case '-':
    printf("Minus of two number is %lf-%lf = %lf", num1, num2, num1-num2);
    break;

case '*':
    printf("Multiply of two number is: %lf*%lf = %lf", num1, num2, num1*num2);
    break;
case '/':
    printf("Divition of two number is: %lf/%lf = %lf", num1, num2, num1/num2);
    break;

default:
    printf("No operation is Not possible");

}
return 0;
}

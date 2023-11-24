//using temperature converter in switch function


#include<stdio.h>
int main(void){

int X;
float a, b,faren, cel;

printf("Choose 1 OR 2 :\n");
printf("1. for Farenhite to celsius \n");
printf("2. for Celcius to Farenhite\n ");
scanf("%d", &X);



switch(X){
case 1:

    printf("This is the Farenhite value:");
    scanf("%f", &a);
    cel = (a-32)*5/9;
    printf("Celcious value is: %f", cel);
    break;

case 2:
    printf("Enter the Celcious value:");
    scanf("%f", &b);
    faren = 1.8*b+32;
    printf("Farenhite value is: %f", faren);
    break;

default:
    printf("Nice Try!! Try Again!!");
}
return (0);

}

/*

#include<stdio.h>

main() {


    float a, b, celsius, fahrenheit;
    int x;
    printf("Press 1 For Convert Fahrenheit To Celsius\n");
    printf("Press 2 For Convert Celsius To Fahrenheit\n");
    printf("\nEnter Your Choice: ");

    scanf("%d", & x);

    switch (x) {
    case 1:
        printf("\nEnter The Temperature in Fahrenheit: ");
        scanf("%f", & a);
        celsius = 5 * (a - 32) / 9;
        printf("\n\nCelsius Temperature is: %f ", celsius);
        break;
    case 2:
        printf("\nEnter The Temperature in Celsius: ");
        scanf("%f", & b);
        fahrenheit = ((9 * b) / 5) + 32;
        printf("\n\nFahrenheit Temperature is: %f ", fahrenheit);
        break;
    default:
        printf("\n\nWrong Choice.....Try Again!!!\n");
    }
    return (0);
}
*/

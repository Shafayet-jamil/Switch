#include<stdio.h>
int main(void){
char var;
printf("Enter a charecter:");
scanf("%c", &var);

if((var>='A' && var<='Z') || (var>='a' && var<='z'))
{



switch(var){

    case'A':
        case'E':
            case'I':
                case'O':
                    case'U':

case'a':
    case'e':
        case'i':
            case'o':
                case'u':



printf("%c is Vowel", var);
break;

default:
    printf("%c is consonant", var);
    break;

    }
}

else{
    printf("%c is Not alphabet", var);
}

return 0;
}






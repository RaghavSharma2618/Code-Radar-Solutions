#include <stdio.h>

int main(){
    char var;
    scanf("%c",var);
    if ((var=="a")||(var=="e")||(var=="i")||(var=="o")||(var=="u")){
        printf("Vowel");
    }
    else if((var=="1")||(var=="2")||(var=="3")||(var=="4")||(var=="5")||(var=="6")||(var=="7")||(var=="8")||(var=="9")||(var=="0")){
        printf("Digit");
    }
    else if((var=="!")||(var=="@")||(var=="#")||(var=="$")||(var=="%")||(var=="^")||(var=="&")||(var=="*")){
        printf("Special Character");}
    else{
        printf("Consonant");
    }
    

}
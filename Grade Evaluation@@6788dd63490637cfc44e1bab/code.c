#include <stdio.h>
int main(){
    char grade;
    scanf("%c", &grade);
    switch(grade){
        case 'A':
        printf("Excellent\n");
        break;
        case 'B':
        printf("Good\n");
        break;
        case 'c':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail");
        break;

    }
    return 0;
}
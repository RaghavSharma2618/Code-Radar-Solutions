#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d %c",&a &b %c);
    switch(op){
        case'+':
        printf("%d\n",a+b);
        break;
        case'-':
        printf("%d\n",a-b);
        break;
        case'*':
        printf("%d\n",a*b);
        break;
        case'/':
        printf("%d\n",a/b);
        break;
        default:
        printf("error");
    }
    return 0;
}
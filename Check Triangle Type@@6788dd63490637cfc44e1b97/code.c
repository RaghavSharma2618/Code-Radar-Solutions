#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a==b && a==c){
        printf("Equilateral");
    }
    else if((a==b && a!=c) || (a==c && a!=b)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}
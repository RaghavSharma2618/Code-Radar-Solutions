#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int counter = 0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            counter++;
        }
    }
    if(counter == 2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
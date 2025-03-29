#include<stdio.h>
int isPrime(){
    int num,count=0;
    scanf("%d", &num);
    for(int i=2;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==1){
        return 1;
    }
    else{
        return 0;
    }

}
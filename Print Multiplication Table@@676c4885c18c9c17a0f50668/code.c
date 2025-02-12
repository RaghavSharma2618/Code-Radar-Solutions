#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int num = 1; num<=10; num++){
        printf("%d x %d = %d\n",N,num,N*num);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int num = 1;num<=10;num++){
        print("%d x %d = %d\n",a,num,a*num);
    }
    return 0;
}
int isPrime(){
    int num,count=0;
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==2){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }

}
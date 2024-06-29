#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=n;count!=6;i++){
        if(i%2!=0){
            printf("%d\n",i);
            count++;
        }
    }
}
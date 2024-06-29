#include<stdio.h>
int main()
{
    int i, j, X, Y, x = 0, c;
    for(i = 0;i < 100;i++){
        scanf("%d %d", &X, &Y);
        if(X == Y)break;
        if(X > Y)printf("Decrescente\n");
        else printf("Crescente\n");
    }
    return 0;
}
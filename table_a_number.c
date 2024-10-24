#include<stdio.h>
int main()
{
    int n,i=1,p;
    
        printf("\n Enter the number\n");
        scanf("%d",&n);
        do{
            p=n*i;
            printf("\n %d*%d=%d\n",n,i,p);
            i++;

        }
    while (i<=10);
    
}
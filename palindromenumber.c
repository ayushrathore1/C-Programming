#include<stdio.h>
int main()
{
int n,r,rev,t;
rev = 0;
printf("\n Enter A Number \n");
scanf("%d",&n);
t=n;

while(n!=0)
{
    r=n%10;
    rev = rev*10+r;
    n=n/10;

}
if(t==rev)
{
    printf("\n Entered Number is a Palindrome");
}
else
{
    printf("Entered Number is not a Palindrome");
} 
return 0;
 
 
}
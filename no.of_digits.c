#include<stdio.h>
int main()
{
long c=0,n; 

/* 
if we take the datatype int 
then the output will be limited
to only 9 digits also when we
enter a noumber having more 
than 9 digits
PS: datatype long also has the limit to show 
only 19 digits
*/

printf("Enter A Number\n");
scanf("%ld",&n);
while(n!=0)
{
n=n/10;
c++;
}
printf("\n No. of digits = %ld\n",c);
return 0;

}
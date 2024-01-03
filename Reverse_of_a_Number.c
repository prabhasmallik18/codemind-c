#include<stdio.h>
int main()
{
    int n,i,r;
    scanf("%d",&n);
   while(i=n)
   {
       r=n%10;
       printf("%d",r);
       n=n/10;
   }
}
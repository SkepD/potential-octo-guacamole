#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 double delta;
 double result;
 double x1;
 double x2;
 unsigned int N;
 unsigned int variant;

 printf("Enter variant (1 or 2)");
 printf("\n Variant 1 means choosing count of columns");
 printf ("\n Variant 2 means choosing step from first to second x:");
 scanf("%d",&variant);

    while(variant!= 1  &&  variant!= 2)
        {
        printf("Error. Please try again:");
        scanf("%d",&variant);
    }
      if(variant == 1)
        {
 printf("\n Enter x1: ");
 scanf("%lf",&x1);
 printf("\n Enter x2: ");
 scanf("%lf",&x2);
 printf("\n Enter N: ");
 scanf("%u",&N);
 int i=1;

 printf("\n************************************************");
 printf("\n*  N  *         X         *        F(X)        *");
 printf("\n************************************************");

    delta=(x2-x1)/(N-1);
    for(i;i<=N;i++)
    {
        result=9*x1*x1*x1-1000;
    printf("\n|%5.0d|%19.2f|%20.2f|\n",i,x1,result);
    if(i%10==0)
    {
        printf("\nPress any key to continue...");
    }
    x1=x1+delta;
    }
    }

if(variant == 2){

 printf("\n Enter x1: ");
 scanf("%lf",&x1);
 printf("\n Enter x2: ");
 scanf("%lf",&x2);
 printf("\n  Enter delta:");
 scanf("%lf",&delta);
 int i=1;

 printf("\n************************************************");
 printf("\n*  N  *         X         *        F(X)        *");
 printf("\n************************************************");
    while(x1<=x2)
    {
          result=9*x1*x1*x1-1000;
    printf("\n|%5.0d|%19.2f|%20.2f|\n",i,x1,result);
    if(i%10==0)
    {
        printf("\nPress any key to continue...");
    }
    x1=x1+delta;
    i++;
    }
 }
    return 0;
}

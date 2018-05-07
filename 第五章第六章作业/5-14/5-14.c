#include<stdio.h>
#include<math.h>
int main()
{
   double x1;
   double x0;
   double f;
   double fl;
   x1=1.5;
   do
   {
       x0=x1;
       f=((2*x0-4)*x0+3)*x0-6;
       fl=(6*x0-8)*x0+3;
       x1=x0-f/fl;
   }
   while(fabs(x1-x0)>=1e-5);
   printf("the root of equation is %5.2f\n",x1);
   return 0;

}

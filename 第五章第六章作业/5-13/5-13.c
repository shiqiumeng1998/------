#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float x0;
    float x1;
    printf("please input a positive number:");
    scanf("%f",&a);
    x0=a/2;
    x1=(x0+a/x0)/2;
    do
    {
        x0=x1;
        x1=(x0+a/x0)/2;
    }
    while(fabs(x0-x1)>=1e-5);
    printf("the square root of %5.2f is %8.5f\n",a,x1);
    return 0;

}

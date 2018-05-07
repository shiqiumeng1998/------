#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    a=9;
    c=1;
    while(a>0)
    {
        b=(c+1)*2;
        c=b;
        a--;
    }
    printf("total=%d\n",b);
    return 0;
}

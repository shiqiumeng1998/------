
#include<stdio.h>
int main()
{
    int m;
    int s;
    int i;
    for(m=2;m<1000;m++)
    {
        s=0;
        for(i=1;i<m;i++)
          if((m%i)==0) s=s+i;
        if(s==m)
        {

            for(i=i;i<m;i++)
        if(m%i==0) printf("%d",i);
        printf("\n");
        printf("%d,its factors are:%d",m,i);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    double sn=100;
    double hn=sn/2;
    int n;
    for(n=2;n<=10;n++)
    {
        sn=sn+2*hn;
        hn=hn/2;
    }
    printf("��ʮ�����ʱ������%f��\n",sn);
    printf("��ʮ�η���%f��\n",hn);
    return 0;
}

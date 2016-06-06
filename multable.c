#include <stdio.h>

int main()
{
    int a[100],n,i,k,s=0;
    printf("enter the no of value and key\n");
    scanf("%d\t%d",&n,&k);
	printf("multiplication table for\t%d\n",k);
    for(i=1;i<=n;i++)
    {
        s=i*k;
        printf("%d*%d=%d\n",i,k,s);
    }
    return 0;
}

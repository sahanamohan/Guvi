#include <stdio.h>

int main(void) {
	int l,c=1,i;
	printf("enter the value");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		c=c*i;
	}
	printf("factorial %d",c);
	return 0;
}

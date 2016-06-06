#include <stdio.h>

int main(void) {
	int l;
	printf("enter the value");
	scanf("%d",&l);
	if(l%4==0)
	{
		printf("leap year");
	}
	else
	    printf("not leap year");
	return 0;
}

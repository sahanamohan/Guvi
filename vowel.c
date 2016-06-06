#include <stdio.h>

int main(void) {
	char l;
	printf("enter the value");
	scanf("%c",&l);
	if(l=='a'|| l=='e'|| l=='i'|| l=='o'|| l=='u')
	{
		printf("vowel %c",l);
	}
	else
	    printf("consonant %c",l);
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(void) {
	char l[100];
	int c=0;
	printf("enter the value");
	gets(l);
	for(int i=0;i<strlen(l);i++)
	if(l[i]=='a'|| l[i]=='e'|| l[i]=='i'|| l[i]=='o'|| l[i]=='u'||l[i]=='A'|| l[i]=='E'|| l[i]=='I'|| l[i]=='O'|| l[i]=='U')
	{
		c++;
	}
	printf("%d",c);
	return 0;
}

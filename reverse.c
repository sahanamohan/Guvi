#include <stdio.h>
#include <string.h>
int main(void) {
	char s[100];int i;
	gets(s);
	int l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
	 printf("%c",s[i]);printf("-");
	}
	return 0;
}

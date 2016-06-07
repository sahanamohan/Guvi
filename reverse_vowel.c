#include <stdio.h>
#include <string.h>
int main(void) {
	char s[100];int i;
	gets(s);
	int l=strlen(s);
	for(i=l;i>=0;i--)
	 printf("%c",s[i]);printf("\n");
	for(i=l;i>=0;i--)
	  if(!(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'||s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'))
	  {
	      printf("%c",s[i]);
	  }
	return 0;
}

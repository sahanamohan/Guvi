#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,c=0;
   gets(a);
    int l=strlen(a);
    for(i=0;i<=l;i++)
    {
        if(a[i]==' '|| a[i]=='\\')
          c++;
    }
    printf("%d",c+1);
    return 0;
}

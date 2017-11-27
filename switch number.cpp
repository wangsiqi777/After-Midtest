#include <stdio.h>
int main ()
{
char c;
scanf("%c",&c);
if(c<=90&&c>=65){
c=c+32;
printf("%c",c);
}
else if(c<=122&&c>=97){
c=c-32;
printf("%c",c);
}
else printf("error");

return 0;
}

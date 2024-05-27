#include <stdio.h>
void main()
{
   char* c = "******************";
   int i,n;
   printf("Enter the Number of lines:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   	printf("%*.*s\n",i,i,c);
}

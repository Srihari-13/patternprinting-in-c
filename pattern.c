#include<stdio.h>
int main()
{
int row;
int coll;
int n;
n=3;
for(row=1; row<=n; row+=1)
{
   for(coll=1;coll<=n;coll+=1)
   {
       printf("*");
   }
   printf("%c",10);
}


 return 0;
}

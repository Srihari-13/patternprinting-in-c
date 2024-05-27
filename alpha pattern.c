#include<stdio.h>
int main()

{
    int alpha;
    for (alpha=65; alpha<=90;alpha+=1)
    {
        printf("%c", alpha);
    }
    printf("%c",10);
    for (alpha=65; alpha<=90;alpha+=1)
    {
        printf("~");
    }
    return 0;
}
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
//~~~~~~~~~~~~~~~~~~~~~~~~~~

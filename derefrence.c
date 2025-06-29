#include <stdio.h>
void main()
{
    int a=45;
    int *b=&a;
    printf("%p \n",b);
    printf("%p", *b);
}

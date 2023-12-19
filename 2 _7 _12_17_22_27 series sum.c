#include <stdio.h>
#include <conio.h>

int main()
{
    int i,s=0;

    for(i=2; i<=27; i=i+5)
    {s=s+i;}
    printf("The sum of the series is = %d\n", s);
}

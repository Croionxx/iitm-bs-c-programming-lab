#include<stdio.h>
int n = 1; //changed n = 0 to n = 1
void fact(int in) //introduced in variable
{   
    int i = 1;
    for(; i <= in; i++)
        n *= i;
}

int main()
{
    fact(5);
    printf("%d\n", n);
    return 0;
}


# include<stdio.h>
int prime_bad(int n)
{
    if (n<2)
    {
        return 0;
    }
    else
    {
        for (int i=2; i*i <= n; i++) //changed operator < to <=
        {
            if (n%i == 0)
            {
                return 0;
            }
        }
    return 1;
    }
}
int main()
{
    int n, res;
    scanf("%d",&n);
    res = prime_bad(n);
    if(res==0)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
    return 0;
}


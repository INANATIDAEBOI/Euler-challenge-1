#include<stdio.h>
int main ()
{
    int x=10;
    int ans;
    for(int i=1 ; i<x ; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            ans += i;
        }
    }
    printf("%d",ans);
    return 0;
}
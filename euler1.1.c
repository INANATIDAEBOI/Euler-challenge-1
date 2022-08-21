#include<stdio.h>
int main()
{
    int i=1;
    int x=10,ans;
    while(i<x)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            ans += i;
        }
        i++;
    }    
    printf("%d",ans);
    return 0;
}

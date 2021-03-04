#include<stdio.h>

void main()
{
    int n,i,k,get;
    scanf("%d",&n);
    char term[n];

    fflush(stdin);
    for(i=0 ; i<n ; i++)
    {
        scanf("%[^" "]c",&term[i]);
    }


    for(i=0 ; i<n ; i++)
        printf("%c ",term[i]);

}



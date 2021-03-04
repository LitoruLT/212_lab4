#include<stdio.h>

void main()
{
    int n=200,i,k=0;
    char term[n],ans[n];

    scanf("%[^\n]",term);

    for(i=0; i<n ;i++)
    {
        if(term[i]!=term[i+1])
        {
            ans[k]=term[i];
            k++;
        }
    }

    i=0;
    while( ans[i] != NULL)
    {
        printf("%c",ans[i]);
        i++;
    }


}



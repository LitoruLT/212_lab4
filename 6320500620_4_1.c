#include<stdio.h>

void main()
{
    int n,i,k,get;
    scanf("%d",&n);
    int score[n];
    for(i=0 ; i<n ; i++)
        score[i]=0;

    for(i=0 ; i<n ; i++)
    {
        for(i=0 ; k<3 ; k++)
        {
            scanf("%d",&get);
            if(k==0)
                score[k]=score[k]+(get*4);
            else if(k==1)
                score[k]=score[k]+(get*2);
            else if(k==2)
                score[k]=score[k]+(get*1);
            else
                printf("\n\n\nLoop score Error\n\n\n");
        }
    }
    for(i=0 ; i<n ; )
    {
        for(k=0 ; k<3 ; k++)
        {

        }
    }


}

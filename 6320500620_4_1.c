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
        for(k=0 ; k<3 ; k++)
        {
            scanf("%d",&get);
            if(k==0)
                score[i]=score[i]+(get*4);
            else if(k==1)
                score[i]=score[i]+(get*2);
            else if(k==2)
                score[i]=score[i]+(get*1);
            else
                printf("\n\n\nLoop score Error\n\n\n");
        }
    }
    int save[n],max=0,min=0;

    for(i=0 ; i<n ; i++)
        save[i]=0;

    for(i=0 ; i<n ; i++)
    {
        for(k=0 ; k<3 ; k++)
        {
            if(i <= n-3)
            {
                if(k+i < n)
                    save[i]=save[i]+score[i+k];
            }
            else
            {
                save[i]=save[i-1];
            }
        }
        if(save[max]<save[i])
        {
            max=i;
        }
        else if(save[min]>save[i])
        {
            min=i;
        }
    }
    printf("%d %d",max+1,min+1);

    /*
    for(i=0 ; i<n ; i++)
        printf("score = %d\n",score[i]);
    for(i=0 ; i<n ; i++)
        printf("save = %d\n",save[i]);
    */
}

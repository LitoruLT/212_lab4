#include<stdio.h>
#include <stdlib.h>

int setpos(char walk[100][50],int i)
{
    int k=0,pos=1;

    while(walk[i][k]!='\0')
        {
            switch(walk[i][k])
            {
                case 'A':
                    if(pos==2)
                        pos=3;
                    else if(pos==3)
                        pos=2;
                break;
                case 'B':
                    if(pos==1)
                        pos=4;
                    else if(pos==4)
                        pos=1;
                break;
                case 'C':
                    if(pos==1)
                        pos=3;
                    else if(pos==3)
                        pos=1;
                    else if(pos==2)
                        pos=4;
                    else if(pos==4)
                        pos=2;
                break;
                case 'D':
                    if(pos==1)
                        pos=2;
                    else if(pos==2)
                        pos=1;
                    else if(pos==3)
                        pos=4;
                    else if(pos==4)
                        pos=3;
                break;
                case 'E':
                    if(pos==1)
                        pos=4;
                    else if(pos==4)
                        pos=1;
                    else if(pos==2)
                        pos=3;
                    else if(pos==3)
                        pos=2;
                break;

            }
            k++;

        }
        return pos;
}


void main()
{
    int n,i,k=0,walk[100][50],pos=1;
    scanf("%d",&n);

    for(i=0; i<n ;i++)
    {
        pos=1;
        fflush(stdin);
        scanf("%[^\n]",&walk[i]);

    }
    for(i=0; i<n ;i++)
    {
        pos=setpos(walk,i);
        printf("%d\n",pos);
    }



}



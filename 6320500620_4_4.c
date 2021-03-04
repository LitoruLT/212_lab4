#include<stdio.h>
#include<string.h>

void main()
{
    int n=1000,i=0,k=0,j=0,q;
    char term[n],ans[n],word[n];

    scanf("%[^\n]",term);

    ans[j]=term[i];
    j++;

    for(i=0; term[i]!='\0' ;i++)
    {
        if(term[i]==' ')
        {
            k=0;
            if( !(strcmp(word,"i") && strcmp(word,"of") && strcmp(word,"the") && strcmp(word,"on") && strcmp(word,"at") && strcmp(word,"for") && strcmp(word,"with") && strcmp(word,"a") && strcmp(word,"in") && strcmp(word,"an") && strcmp(word,"and")) )
                {

                }
            else
            {
                ans[j]=word[0];
                j++;
            }

            for(q=0; word[q]!='\0' ;q++)
            {
                word[q]='\0';
            }

        }
        else
        {
            word[k]=toupper(term[i]);
            k++;
        }

    }

    i=0;
    while( ans[i] != '\0')
    {
        printf("%c",ans[i]);
        i++;
    }

}



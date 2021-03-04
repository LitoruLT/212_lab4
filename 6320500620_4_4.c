#include<stdio.h>

void main()
{
    int n=200,i=0,k=0,j=0,q;
    char term[n],ans[n],word[5];

    scanf("%[^\n]",term);

    ans[j]=term[i];
    j++;

    for(i=0; term[i]!='\0' ;i++)
    {
        if(term[i-1]==' ')
        {
            k=0;
            for(q; q<5 ;q++)
            {
                word[q]='\0';
            }
            if(word == "i" || word == "of" || word == "the" || word == "on" || word == "at" || word == "for" || word == "with" || word == "a" || word == "in" || word == "an" || word == "and")
                {

                }
            else
            {
                ans[j]=term[i];
                j++;
            }

        }
        else
        {
            word[k]=term[i];
        }

    }

    i=0;
    while( ans[i] != '\0')
    {
        printf("%c",ans[i]);
        i++;
    }

}



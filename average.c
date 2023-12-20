#include<stdio.h>

void average(char *s)
{
    int cc=0,cw=1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i] == ' ' && s[i+1]!=' ')
        {
            cw+=1;
        }
        if(s[i]!= ' ')
        {
            cc=cc+1;
        }
    }

    int i=0,temp=0;
    while(1)
    {
        if(s[i]==' ')
        {
            temp=1;
        }
        else
        {
            break;
        }
        i++;
    }

    if(temp==1)
    {
        cw=cw-1;
    }

    float avg=(float)cc/cw;
    printf("The average is %0.2f",avg);
}

int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    average(str);
}

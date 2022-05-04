/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
void mystrcat(char *str1,char *str2)
{
    int i,j=0;
    for(i=0;str1[i]!='\0';i++);
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    return ;
}
int main()
{
    char str1[10]="string",str2[30]=" concatention";
    mystrcat(str1,str2);
    printf("String concatenation :%s\n",str1);
    int i;
    for(i=0;str1[i]!='\0';i++);
    printf("String length :%d\n",i);
    return 0;
}
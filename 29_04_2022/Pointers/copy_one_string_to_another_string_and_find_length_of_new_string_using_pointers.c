#include <stdio.h>
void mystrcpy(char *src,char *des)
{
    while(*src!='\0')
    {
        *des = *src;
        src++;
        des++;
    }
    *des = '\0';
    return ;
}

int mystrlen (char *des)
{
    int i;
    for(i=0;*des != '\0';des++,i++);
    return i;
}
int main()
{
    char src [15]="Helloworld",des[]={};
    mystrcpy(src,des);
    printf("String :%s\n",des);
    printf("Des string length is %d\n",mystrlen(des));
    return 0;
}
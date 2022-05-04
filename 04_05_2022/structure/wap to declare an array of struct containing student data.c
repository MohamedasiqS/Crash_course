/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

typedef struct student_data
{
    char name [25];
    char branch [25];
    float cgpa;
}stu;

void student_count (int *count)
{
    printf ("Enter No of student for collecting data\n");
    scanf ("%d",&(*count));
}

void input_data (stu *stu_details)
{
    printf ("Enter Student Name\n");
    scanf ("%s",stu_details->name);
    printf ("Enter Student Branch name\n");
    scanf ("%s",stu_details->branch);
    printf ("Enter Student CGPA\n");
    scanf ("%f",&stu_details->cgpa);
}

void print (stu *stu_details)
{
    printf ("Student Name : %s\n",stu_details->name);
    printf ("Student Branch Name :%s\n",stu_details->branch);
    printf ("Student Cgpa :%f\n",stu_details->cgpa);
}
int main(void)
{
    int tot_stu,i;
    student_count (&tot_stu);
    
    stu stu_details [tot_stu];
    
    for (i=0;i<tot_stu;i++)
    {
        printf ("Enter student Details - %d\n",i+1);
        input_data (&stu_details[i]);
    }
    for (i=0;i<tot_stu;i++)
    {
        printf ("Details of Student - %d\n",i+1);
        print (&stu_details[i]);
    }
    return 0;
}

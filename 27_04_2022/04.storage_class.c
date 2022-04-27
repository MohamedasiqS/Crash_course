#include <stdio.h>

extern int extern_var=90;
int global_variable=1000;
static int stat_global_var =900;

int *add()
{
    static int local_stat_var = 30+30;
    return &local_stat_var;
}
int main(void)
{
    register int reg_var=20;
    int loc_var = 30,*ret;
    ret = add();
    printf("Add : %d\n",*ret);
    printf("Local variable :%d\n",loc_var);
    printf("Extern type variable :%d\n",extern_var);
    printf("Global Static variable :%d\n",stat_global_var);
    printf("Global variable:%d\n",global_variable);
    printf("Register variable :%d\n",reg_var);
    return 0;
}
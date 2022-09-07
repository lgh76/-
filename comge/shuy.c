#include <stdio.h>

int main()
{
	int var_runoob = 10;
    printf("var_runoob=%d\n", var_runoob);
    int *p = &var_runoob;
    printf("*p=%d\n", *p);
	return 0;
}
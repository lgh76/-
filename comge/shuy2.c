#include <stdio.h>

int main()
{
   int var = 20;
   int *ip;

   ip = &var;

   printf("ip 变量存储的地址：%d\n", ip);
   printf(" *ip 的值：%d\n", *ip);

   return 0;
}
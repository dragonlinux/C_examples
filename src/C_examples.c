/*
 ============================================================================
 Name        : C_examples.c
 Author      : 叶玉龙
 Version     :
 Copyright   : Your copyright notice
 Description : 生成10个长度不确定的随机数，下次执行的结果和上次的结果一样。
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", rand());
	}
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

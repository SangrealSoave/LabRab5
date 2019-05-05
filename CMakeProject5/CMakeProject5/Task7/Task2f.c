#include <stdio.h>
#include <math.h>
#include < string.h >

char *find(const char *str, const char *substr) 
{
	char *istr = 0;
	//Поиск строки
	istr = strstr(str, substr);
	//Вывод результата поиска на консоль
	if (istr == NULL)
		printf("Line not found\n");
	else
		printf("Line found,her number= %d\n", istr - str + 1);
	return 0;
}
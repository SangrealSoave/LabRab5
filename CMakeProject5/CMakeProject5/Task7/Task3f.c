#include <stdio.h>
#include < string.h >
#include <stdlib.h>

char *find1(const char *str, const char *substr) 
{
	char *istr = 0;
	//Поиск строки
	istr = strstr(str, substr);
	//Вывод результата поиска на консоль
	if (istr == NULL)
		printf("Line not found\n");
	else
		printf("Line found,her number= %d\n", istr - str + 1);
	char *c= istr - str ;
	return c;
}
void deletet(char *str, const char *substr)

{
	printf("Old line: %s\n", str);
	int istr = 0;
	//Поиск строки
	istr = find1(str, substr);
	strcpy(str+(istr),str+(istr+strlen(substr)));
	printf("New line:%s\n",str);
	system("pause");
}
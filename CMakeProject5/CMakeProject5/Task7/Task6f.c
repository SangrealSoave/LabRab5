#include <stdio.h>
#include < string.h >
#include <stdlib.h>
_Bool insert(const char *src, const char *str, int index, char *dest, int len)
{
	char *str1="";
	char fs = strlen(src) + strlen(str);
	printf("First line:  %s\n", str);
	printf("Second line: %s\n", src);
	if (len > fs)
	{
		strcpy(str1, str + index);
		strcpy(str + index ,src);
		strcpy(dest, strcat(str, str1));
			printf("New line: %s\n", dest);
			system("pause");
	}
	else
	{
		printf("Error\n");
	}
}
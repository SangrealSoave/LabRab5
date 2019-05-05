#include <stdio.h>
#include < string.h >
#include <stdlib.h>
void strcpyy(char *dest,int len, const char *src)
{
	printf("Old line: %s\n", dest);
	if (len < strlen(dest))
	{
		strncpy(src, dest, len);
			printf("New line: %s\n", src);
			system("pause");
	}
	else
	{
		printf("Error\n");
	}
}
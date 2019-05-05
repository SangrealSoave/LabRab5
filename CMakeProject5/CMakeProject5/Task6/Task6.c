#include < stdio.h >  
#include < string.h > 
#include < math.h > 
int main(void)
{
	int len = 50;
	int index = 6;
	const char *dest = "";
	const char *str = "Easy GG VP";
	const char *src = " HAHAHhahhh";
	insert(src, str, index, dest, len);
	system("pause");	
}
#include < stdio.h >  
#include < string.h > 
#include < math.h > 
int main(void)
{
	const char *str = "Easy GG VP";
	const char *substr = "GG";
	const char *dest = "Easy GG VP";
	const char *src1 = "";
	int i;
	int len;
	int index;
	const char *dest1 = "";
	const char *first = "Easy GG VP";
	const char *second = " HAHAHAHAAH";


	const char *src = " HAHAHhahhh";
	printf("Chose variant of tasks:\n1.Length line\n");
	printf("2.Find line\n3.Delete line\n4.Copy line");
	printf("\n5.Copy in limited bufer\n6.Insert line in line");
	switch (_getch())
	{
	case'1':
		system("cls");
		printf("Task1-Length line\n");
		printf("Length line (%s) - %d \n", str, strlen(str));
		system("pause");
		break;
	case'2':
		system("cls");
		printf("Task2-Find line\n");
		i = 0;
		find(str, substr);
		system("pause");
		break;
	case'3':
		system("cls");
		printf("Task3-Delete line\n");
		i = 0;
		deletet(str, substr);
		system("pause");
		break;
	case'4':
		system("cls");
		printf("Task4-Copy line\n");
		 len = 5;
		strcpyy(dest, len, src1);
		system("pause");
		break;
	case'5':
		system("cls");
		printf("Task5-Copy in limited bufer\n");
		 len = 15;
		strcats(dest1, len, first, second);
		system("pause");
		break;
	case'6':
		system("cls");
		printf("Task6-Insert line in line\n");
		len = 50;
	index = 6;
		insert(src, str, index, dest1, len);
		system("pause");
		break;
	default:
		printf("\nError!\n");
		system("pause");
		break;
	}
}
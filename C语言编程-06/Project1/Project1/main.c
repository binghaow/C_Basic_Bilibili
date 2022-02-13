#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <float.h>

int check_sys()
{
	int a = 1;
	char *pa = &a;
	//if *pa == 1 little end, if *pa == 0 big end
	return *pa;

}
unsigned char i = 0;
int main()
{
	//int a = 20;
	////00000000000000000000000000010100 00 00 00 14
	////00000000000000000000000000010100 00 00 00 14
	////00000000000000000000000000010100 00 00 00 14
	//int b = -10;
	////10000000000000000000000000001010 80 00 00 0A
	////11111111111111111111111111110101 FF FF FF F5
	////11111111111111111111111111110110 FF FF FF F6

	

	int ret = check_sys();
	if (check_sys)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	


	return 0; 
}
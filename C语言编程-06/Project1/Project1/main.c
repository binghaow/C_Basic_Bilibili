#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_sys()
{
	int a = 0x11223344;
	char *pa = &a;
	if (*pa == 0x11)
	{
		return 0;
		
	}
	else if (*pa == 0x44)
	{
		return 1;
	}

}
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
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0; 
}
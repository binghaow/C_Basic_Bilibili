#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//浮点型在内存中的存储
int main()
{ 
	//int n = 9; 
	//float* pFloat = (float *)&n;
	//printf("n的值为：%d\n", n);
	//printf("*pFloat的值为：%f\n", n);

	//*pFloat = 9.0;
	//printf("num的值为：%d\n", n);
	//printf("*pFloat的值为：%f\n", *pFloat);

	float f = 5.5;
	// 5.5
	// 101.1
	// -1 ^ 0 * 1.011 * 2 ^ 2
	//S = 0, M = 1.011, E = 2+127 = 129
	//内存存储
	//0 10000001  01100000000000000000000
	//S    E               M
	//0100 0000 1011 0000 0000 0000 0000 0000
	//40 B0 00 00
	

	return 0;
}
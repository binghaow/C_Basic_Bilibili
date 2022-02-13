﻿#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//浮点型在内存中的存储
int main()
{ 
	int n = 9; 
	float* pFloat = (float *)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", n);

	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	return 0;
}
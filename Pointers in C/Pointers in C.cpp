// Pointers in C.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int tuna = 19;
	//printf_s("%p", &tuna);//%p is for pointers(A pointer shows the place where the computer hlds the variable)
	int * pTuna = &tuna;//* this is too store the memory address
	printf_s("Address \t Name \t Value \n");
	printf_s("%p \t %s \t %p \n", &pTuna, "pTuna", pTuna);
	printf_s("%p \t %s \t %p \n", pTuna, "tuna", tuna);
    return 0;
}


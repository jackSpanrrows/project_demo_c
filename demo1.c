//#include "stdafx.h"
#include <stdio.h>
#include "stdlib.h"
#include <conio.h>
//将10进制转2进制 
demo1()
{
	int i,j,n,m;
	int a[16] = {0};
	//clrscr();
	printf("please input the decimalism number(0-32767):\n");
	scanf("%d", &n);
	for (m=0;m<15;m++){
		i = n % 2;
		j = n / 2;
		n = j;
		a[m] = i;
	}
	for (m=15;m>=0;m--){
		printf("%d", a[m]);
		if (m%4 == 0){
			printf(" ");
		}
	}
}

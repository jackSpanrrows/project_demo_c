#include <stdio.h>
// ���ӳ��ҵļ��㷨 
void demo3(){
	int day, x1, x2;
	day = 9;
	x2 = 1;
	while (day > 0 ){
		x1 = (x2+1)*2;
		x2 = x1;
		day--;
	}
	printf("the total is %d\n", x1);
}

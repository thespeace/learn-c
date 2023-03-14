#include <stdio.h>

int main(void){
	int x = 0;
	printf("현재의 x는 %d입니다.\n", x);
	x++; // ++ : 증강 연산자 
	printf("현재의 x는 %d입니다.\n", x);
	printf("현재의 x는 %d입니다.\n", x--); // 변수 뒤에 증강 연산자가 붙으면 출력된 후 연산 된다. 
	printf("현재의 x는 %d입니다.\n", x);
	printf("현재의 x는 %d입니다.\n", --x); // 변수 앞에 증강 연산자가 붙으면 출력되기 전에 먼저 연산을 한 후 출력된다. 
	return 0;
}

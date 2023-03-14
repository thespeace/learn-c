#include <stdio.h>

int main(void){
	int x = 50, y = 30;
	printf("x가 y보다 크고 y는 40미만입니까? %d\n", (x > y) && (y < 40)); // && : and : 그리고 : 두 조건 모두 성립하는 경우에 true(참)값을 반환 합니다.
	printf("x가 y보다 작고 y는 30입니까? %d\n", (x < y) || (y == 30)); // || : or : 혹은 : 두 조건 중 하나만 성립하는 경우에 true(참)값을 반환 합니다.
	printf("x가 50이 아닙니까? %d\n", x != 50);
	return 0;
}

// 논리연산자 : &&, ||

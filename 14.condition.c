#include <stdio.h>

int main(void){
	int x = -50, y = 30; 
	int absoluteX = (x > 0) ? x : -x; // 조건 ? true일 때 반환 : false일 때 반환, absoluteX는 항상 절대 값을 반환받게 됩니다.
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	printf("x의 절댓값은 %d입니다.\n", absoluteX); 
	printf("x와 y중에서 최댓값은 %d입니다.\n", max);
	printf("x와 y중에서 최솟값은 %d입니다.\n", min);
	return 0;
}

// 조건 연산자 == 조건 ? true : false;

#include <stdio.h>

// 이차원 배열을 이용해서 만든 구구단 프로그램입니다. 
int main(void){
	int i, j;
	int gugudan[10][10];
	for(i = 1; i <= 9; i++){
		printf("\n[ %d단] \n\n", i);
		for(j = 1; j <= 9; j++){ // 이중 for문 : for문 안에 for문을 사용하는 것, 이차원 배열을 굉장히 밀접한 관련이 있습니다. 
			gugudan[i][j] = i * j;
			printf("%d X %d = %d\n", i, j, gugudan[i][j]);
		}
	}
	return 0;
}

/*
	다차원 배열?
	 배열이 배열의 원소로 들어가는 구조를 말합니다. 흔히 이차원 배열은 M x N 형태의 지도를 나타내고자 할 때 많이 사용됩니다.
	이러한 다차원 배열을 적절하게 활용하게 되면 현실 세계의 다양한 문제에 보다 쉽게 접근할 수 있습니다.
*/

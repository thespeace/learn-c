#include <stdio.h>
#include <stdlib.h>

//2차원 배열의 동적 메모리를 할당하여 활용하는 프로그램입니다. 
int main(void){
	int i, x, y;
	int ** pptr = (int**)malloc(sizeof(int *) * 8);
	for(i = 0; i < 8; i++){ //초기화, 배열로 예를 들자면 6개의 배열에서의 하나 하나 배열에 8개의 배열이 들어가는 이차원 배열 구조를 포인터로 초기화하여 할당한 것입니다. 즉 총 48개 만큼의 int형 이차원 배열 공간을 만든 것입니다. 
		* (pptr + i) = (int *)malloc(sizeof(int) * 6);
	}
	
	for(y = 0; y < 8; y++){ // y : 두번째 공간을 뜻합니다. 
		for(x = 0; x < 6; x++){ // x : 각각의 공간을 뜻합니다. 
			*(*(pptr + y) + x) = 6 * y + x;
		}
	}
	
	for(y = 0; y < 8; y++){
		for(x = 0; x < 6; x++){
			printf("%3d", *(*(pptr + y) + x)); 
		}
		printf("\n");
	}
	
	for(y = 0; y < 8; y++){ //세부적인 공간부터 할당을 해제합니다. 
		free(*(pptr + y));
	}
	
	return 0;
}

/*
	이로써 C언어의 기초문법은 마무리가 되었고, 
	이후로는 자료구조, 알고리즘을 공부하시면 됩니다. 
*/

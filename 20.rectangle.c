#include <stdio.h>
#define N 10

int main(void){
	int i, j;
	for(i = 0; i < N; i++) { 
		for(j = 0; j < N; j++){
			printf("★");
		}
		printf("\n"); // 별이 10번 실행되고 줄바꿈이 일어나는 것이 반복한다. 
	}
	return 0;
}

/*
	for문의 작동방식(흐름)
	 for( 1.초기화식; 2.조건식; 4.증감식) {
	 	3.실행문장; 
	 }
	 
	위처럼 조건식을 더욱 잘 표현할 수 있다는 특징 때문에 while문보다 더 많이 사용됩니다. 
*/

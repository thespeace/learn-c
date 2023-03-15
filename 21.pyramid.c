#include <stdio.h>
#define N 20

int main(void){
	int i, j; //C언어에서는 for문 함수 바깥쪽에서 초기화 및 선언을 해준 후 for문 초기화식에 사용해줘야 한다. <-> 반대로 JAVA는 for문 초기화식에서 변수 선언을 해줄 수 있다. 
	for(i = 0; i < N; i++){
		for(j = N - i - 1; j > 0; j--){ 
			printf("  ");
		}
		for(j = 0; j < i; j++){
			printf("★");
		}
		for(j = 0; j < i - 1; j++){
			printf("★");
		}
		printf("\n");
	}
	return 0;
}

/*
	무한 루프? 
	for(;;) 이나 while(1)는 무한하게 동작합니다.
	무한 루프에서 빠져나오기 위해서는 break; 를 이용하면 즉시 반복문에서 빠져나올 수 있습니다.
		ex )  while(1) {
				  if(a == 1)
				  	break;
			  }
*/

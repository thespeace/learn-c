#include <stdio.h>
#include <stdlib.h>

//동적 메모리로 정수 5개 처리하는 프로그램입니다. 
int main(void){
	int *pi, i;
	pi = (int *)malloc(5 * sizeof(int)); //총 5개의 인트형 데이터가 들어갈 수 있는 마치 배열과 같은 공간을 할당해줍니다.
	if(pi == NULL){
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;
	for(i = 0; i < 5; i++){
		printf("%d\n", *(pi + i)); //포인터 위치를 하나씩 증가시켜 나가면서 그곳에 해당하는 위치의 값을 출력합니다. 
	}
	free(pi);
	return 0;
} 

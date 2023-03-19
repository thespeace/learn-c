#include <stdio.h>
#define NUMBER 5

//5개의 정수 중에서 짝수 최댓값과 홀수 최댓값을 구하는 프로그램입니다. 
int main(void){
	int array[NUMBER];
	int i , oddMax, evenMax; // 홀수 최댓값과 짝수 최댓값을 선언해줍니다.
	oddMax = 0;
	evenMax = 0;
	for(i = 0; i < NUMBER; i++){
		scanf("%d", &array[i]);
		if(array[i] % 2 == 0){
			if(evenMax < array[i]){
				evenMax = array[i];
			}
		}
		else{
			if(oddMax < array[i]){
				oddMax = array[i];
			}
		}
	}
	printf("%d %d", oddMax, evenMax);
	return 0;
}

// 위와 같이 배열을 사용하면 대량의 데이터라 하더라도 목적에 맞게 관리하고 추출할 수 있습니다. 

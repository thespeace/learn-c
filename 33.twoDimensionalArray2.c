#include <stdio.h>

//학생 점수의 총 합을 구하는 프로그램입니다. 
int main(void){
	int score[5][2]; // 행 5, 열 2 이기 때문에 10개의 데이터가 들어갈 수 있는 공간을 선언했습니다.
	int total[2] = {0, }; // 1차원 배열을 할당 할 때, 모든 데이터에 값을 0으로 넣어주겠다는 의미입니다. 
	int i, j;
	 
	for(i = 0; i < 5; i++){
		printf("%d번 학생의 수학, 영어 점수 : ", i);
		scanf("%d %d", &score[i][0], &score[i][1]);
	}
	 
	for(i = 0; i < 5; i++){
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	
	printf("\n\n5명의 수학 점수 합계 : %d\n", total[0]);
	printf("5명의 영어 점수 합계 : %d\n	", total[1]);
	return 0;
}

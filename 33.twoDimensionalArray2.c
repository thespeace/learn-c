#include <stdio.h>

//�л� ������ �� ���� ���ϴ� ���α׷��Դϴ�. 
int main(void){
	int score[5][2]; // �� 5, �� 2 �̱� ������ 10���� �����Ͱ� �� �� �ִ� ������ �����߽��ϴ�.
	int total[2] = {0, }; // 1���� �迭�� �Ҵ� �� ��, ��� �����Ϳ� ���� 0���� �־��ְڴٴ� �ǹ��Դϴ�. 
	int i, j;
	 
	for(i = 0; i < 5; i++){
		printf("%d�� �л��� ����, ���� ���� : ", i);
		scanf("%d %d", &score[i][0], &score[i][1]);
	}
	 
	for(i = 0; i < 5; i++){
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	
	printf("\n\n5���� ���� ���� �հ� : %d\n", total[0]);
	printf("5���� ���� ���� �հ� : %d\n	", total[1]);
	return 0;
}

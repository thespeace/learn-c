#include <stdio.h>
#include <stdlib.h>

//2���� �迭�� ���� �޸𸮸� �Ҵ��Ͽ� Ȱ���ϴ� ���α׷��Դϴ�. 
int main(void){
	int i, x, y;
	int ** pptr = (int**)malloc(sizeof(int *) * 8);
	for(i = 0; i < 8; i++){ //�ʱ�ȭ, �迭�� ���� ���ڸ� 6���� �迭������ �ϳ� �ϳ� �迭�� 8���� �迭�� ���� ������ �迭 ������ �����ͷ� �ʱ�ȭ�Ͽ� �Ҵ��� ���Դϴ�. �� �� 48�� ��ŭ�� int�� ������ �迭 ������ ���� ���Դϴ�. 
		* (pptr + i) = (int *)malloc(sizeof(int) * 6);
	}
	
	for(y = 0; y < 8; y++){ // y : �ι�° ������ ���մϴ�. 
		for(x = 0; x < 6; x++){ // x : ������ ������ ���մϴ�. 
			*(*(pptr + y) + x) = 6 * y + x;
		}
	}
	
	for(y = 0; y < 8; y++){
		for(x = 0; x < 6; x++){
			printf("%3d", *(*(pptr + y) + x)); 
		}
		printf("\n");
	}
	
	for(y = 0; y < 8; y++){ //�������� �������� �Ҵ��� �����մϴ�. 
		free(*(pptr + y));
	}
	
	return 0;
}

/*
	�̷ν� C����� ���ʹ����� �������� �Ǿ���, 
	���ķδ� �ڷᱸ��, �˰������� �����Ͻø� �˴ϴ�. 
*/
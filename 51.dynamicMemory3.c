#include <stdio.h>
#include <stdlib.h>

//���� �޸𸮷� ���� 5�� ó���ϴ� ���α׷��Դϴ�. 
int main(void){
	int *pi, i;
	pi = (int *)malloc(5 * sizeof(int)); //�� 5���� ��Ʈ�� �����Ͱ� �� �� �ִ� ��ġ �迭�� ���� ������ �Ҵ����ݴϴ�.
	if(pi == NULL){
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}
	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;
	for(i = 0; i < 5; i++){
		printf("%d\n", *(pi + i)); //������ ��ġ�� �ϳ��� �������� �����鼭 �װ��� �ش��ϴ� ��ġ�� ���� ����մϴ�. 
	}
	free(pi);
	return 0;
} 

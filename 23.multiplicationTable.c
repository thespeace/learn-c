#include <stdio.h>

//���ϴ� ���� �������� ����ϴ� ���α׷��Դϴ�.
int main(void){
	int x, i;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &x);
	for(i=0; i<=9; i++){
		printf("%d X %d = %d\n", x, i, x * i);
	}
	return 0;
}

#include <stdio.h>
#define N 20

int main(void){
	int i, j; //C������ for�� �Լ� �ٱ��ʿ��� �ʱ�ȭ �� ������ ���� �� for�� �ʱ�ȭ�Ŀ� �������� �Ѵ�. <-> �ݴ�� JAVA�� for�� �ʱ�ȭ�Ŀ��� ���� ������ ���� �� �ִ�. 
	for(i = 0; i < N; i++){
		for(j = N - i - 1; j > 0; j--){ 
			printf("  ");
		}
		for(j = 0; j < i; j++){
			printf("��");
		}
		for(j = 0; j < i - 1; j++){
			printf("��");
		}
		printf("\n");
	}
	return 0;
}

/*
	���� ����? 
	for(;;) �̳� while(1)�� �����ϰ� �����մϴ�.
	���� �������� ���������� ���ؼ��� break; �� �̿��ϸ� ��� �ݺ������� �������� �� �ֽ��ϴ�.
		ex )  while(1) {
				  if(a == 1)
				  	break;
			  }
*/

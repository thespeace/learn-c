#include <stdio.h>

//Ư���� ���ڿ��� ��� �Լ��� Ȱ���Ͽ� �ݺ� ����ϴ� ���α׷��Դϴ�. 
void print(int count){
	if(count == 0){
		return;
	}else{
		printf("���ڿ��� ����մϴ�.\n");
		print(count - 1); // ��� �Լ�(Recursive Function) :  �ش� �Լ� �ȿ��� �ش� �Լ��� ����ϴ� ���� ���½��ϴ�.
						  // ���� �ش� ������ ���� ����Ѵٸ� FOR���̳� WHILE���� ������� �ʾƵ� ��� ����� �ݺ������� ������ �� �ֽ��ϴ�. 
	}
}
int main(void){
	int number;
	printf("���ڿ��� �� �� ����ұ��?");
	scanf("%d", &number);
	print(number);
	return 0;
}

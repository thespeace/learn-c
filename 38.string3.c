#include <stdio.h>
#include <string.h>

//���ڿ� ���Լ��� strcmp()�� Ȱ���� ���α׷��Դϴ�. 
int main(void){
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("���ڿ� �� : %d\n", strcmp(inputOne, inputTwo)); // strcmp() : ���� 2���� ���������� ���ϸ鼭 0,-1,1�� ��ȯ���ݴϴ�. ���������� ����(0), ù��° ���ڰ� �տ� ����(-1), �ι�° ���ڰ� �տ� ����(1)
	return 0;
}

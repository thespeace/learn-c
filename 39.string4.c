#include <stdio.h>
#include <string.h>

//���ڿ� ���Լ��� strcpy()�� Ȱ���� ���α׷��Դϴ�. 
int main(void){
	char input[10] = "I Love You";
	char result[5] = "Love";
	strcpy(result, input); //result��� ���ڿ� �ȿ� input�̶�� ���ڿ��� ������ �� �ֽ��ϴ�.
	printf("���ڿ� ���� : %s\n", result); //result�� ���ڿ������� ������� �ұ��ϰ� �� �� �迭�� �Ҵ��� ���� �˼��� �ֽ��ϴ�. strcpy()�� ���������� �����͸� �ٷ�� �Լ��� ��ó�� ����� �����մϴ�. 
	return 0;
}

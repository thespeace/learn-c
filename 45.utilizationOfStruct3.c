#include <stdio.h>
#define SIZE 5

//����ü�� �迭�� Ȱ���Ͽ� �л����� ������ �����ϴ� ���α׷��Դϴ�. 
struct student {
	int number;
	char name[20];
	double grade;
};

int main(void){
	struct student list[SIZE]; //�л� ����ü�� ����Ʈ ������ ������ݴϴ�. 
	int i;
	
	for(i = 0; i < SIZE; i++){ // �Է� ���� ���� �ش� ���α׷��� ������ �˴ϴ�. ��, ���α׷��� ��ġ�ϰ��ִ� ���� �Է¹��� ������ �Ͻ������� ����˴ϴ�. 
		printf("�й��� �Է��ϼ��� : ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s", &list[i].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%lf", &list[i].grade);
	}
	
	for(i = 0; i < SIZE; i++){
		printf("�й� : %d, �̸� : %s, �й� %.1f\n", list[i].number, list[i].name, list[i].grade);
	}
	
	return 0;
}

// �̷��� �ڵ� ���� ����� ǥ�����̰� ��û���� ���� ����� �˴ϴ�. 

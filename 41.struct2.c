#include <stdio.h>
#include <stdlib.h>

//�л� ������ �Է¹޾� ����ϴ� ���α׷��Դϴ�. 
struct student{
	int number;
	char name[10];
	double grade;
}; 

int main(void){
	struct student s;
	
	printf("�й��� �Է��ϼ��� : ");
	scanf("%d", &s.number);
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", s.name); // & : �ּҸ� ����ŵ�ϴ�. �迭�� �� ��ü�� �ּҰ��� ����Ű�� �����͸� �ǹ��ϱ⶧���� ���� ������ �ʾƵ� �˴ϴ�.
	printf("������ �Է��ϼ��� : ");
	scanf("%lf", &s.grade); // %lf : double���� �Է¹��� �� ����մϴ�. 
	 
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f\n", s.grade);
	return 0;
}

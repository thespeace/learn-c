#include <stdio.h>
#include <stdlib.h>

//학생 정보를 입력받아 출력하는 프로그램입니다. 
struct student{
	int number;
	char name[10];
	double grade;
}; 

int main(void){
	struct student s;
	
	printf("학번을 입력하세요 : ");
	scanf("%d", &s.number);
	printf("이름을 입력하세요 : ");
	scanf("%s", s.name); // & : 주소를 가르킵니다. 배열을 그 자체로 주소값을 가리키는 포인터를 의미하기때문에 따로 붙이지 않아도 됩니다.
	printf("학점을 입력하세요 : ");
	scanf("%lf", &s.grade); // %lf : double형을 입력받을 때 사용합니다. 
	 
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

//학생 정보 구조체를 만들어 출력하는 프로그램입니다. 
struct student{
	int number;
	char name[10];
	double grade;
}; 

int main(void){
	struct student s; //struct 구조의 하나의 자료형을 사용자가 만든것입니다. 
	s.number = 20150001; // s라는 구조체의 number라는 변수안에 값을 넣을 수 있습니다. 
	strcpy(s.name, "홍길동");
	s.grade = 4.5;
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %0.1f\n", s.grade);
	return 0;
}

/*
	구조체?
	 객체 지향 프로그래밍에서 말하는 클래스의 모체가 되는 것으로 여러 개의 자료형을 묶어서 새로운 자료형을 만들 수 있는 방법입니다. 
	설계의 측면에서 의미가 있는 것이 구조체이며, 여러 개의 데이터를 하나로 묶어서 사용할 수 있도록 하기 위해 만들어진 C언어의 문법입니다.
	후에 이러한 구조체의 개념은 객체 지향 프로그래밍에서는 클래스라는 개념으로 확장되어 사용됩니다.
	배열이 여러 개의 같은 자료형들을 하나로 묶는 것이었다면 구조체는 서로 다른 자료형들을 하나로 묶어서 한꺼번에 다루는 것입니다. 
*/


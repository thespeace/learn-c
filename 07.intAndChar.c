#include <stdio.h>

int main(void){
	char x = 'A'; // char(character) : 문자열 변수를 선언할 때 사용됩니다.
	printf("char A는 : %c\n", x); // %c : char 타입의 변수를 출력.
	
	char y = 65;  // char에 문자를 저장할 때는 문자 자체를 저장하는 것이 아니라 문자에 해당하는 정수값을 저장하게 됩니다. 
				  // 이 규칙을 "아스키(ASCII) 코드"라고 부릅니다.
	printf("char 65는 : %c", y);
	
	int z = 65;
	printf("int 65는 : %c", z); // %c으로 출력한다면 int 타입의 변수여도 알아서 char형태로 변환이 되어서 출력이 됩니다. 
	
	char xx = 'B';
	printf("char B는 : %d", xx);// %d로 char 타입 변수를 정수형으로 출력할 수도 있다. 
	return 0;
}

/*
	Variables Data Types?
	대포적으로 Integer, Character, Float, Double이 있습니다. 
*/

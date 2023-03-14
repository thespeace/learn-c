#include <stdio.h>
#define SECOND_PER_MINUTE 60

int main(void){
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d초 %d분 %d초입니다.\n", input, minute, second);
	return 0;
}

/*
	연산자(operator)와 피연산자(operand)
	 연산자는 하나의 기호 체계입니다. +, -, *, /, %
	 피연산자는 연산자의 연산의 대상을 말합니다. 
*/

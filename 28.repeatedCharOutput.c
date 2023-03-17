#include <stdio.h>

//특정한 문자열을 재귀 함수를 활용하여 반복 출력하는 프로그램입니다. 
void print(int count){
	if(count == 0){
		return;
	}else{
		printf("문자열을 출력합니다.\n");
		print(count - 1); // 재귀 함수(Recursive Function) :  해당 함수 안에서 해당 함수를 사용하는 것을 일컫습니다.
						  // 또한 해당 로직과 같이 사용한다면 FOR문이나 WHILE문을 사용하지 않아도 어떠한 기능을 반복적으로 수행할 수 있습니다. 
	}
}
int main(void){
	int number;
	printf("문자열을 몇 개 출력할까요?");
	scanf("%d", &number);
	print(number);
	return 0;
}

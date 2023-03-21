#include <stdio.h>
#include <string.h>

//문자열 비교함수인 strcpy()를 활용한 프로그램입니다. 
int main(void){
	char input[10] = "I Love You";
	char result[5] = "Love";
	strcpy(result, input); //result라는 문자열 안에 input이라는 문자열을 복사할 수 있습니다.
	printf("문자열 복사 : %s\n", result); //result의 문자열공간을 벗어남에도 불구하고 더 긴 배열을 할당한 것을 알수가 있습니다. strcpy()는 내부적으로 포인터를 다루는 함수라서 이처럼 사용이 가능합니다. 
	return 0;
}

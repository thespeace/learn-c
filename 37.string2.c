#include <stdio.h> 
#include <string.h> // c언어에서 제공하는 기본적인 문자열관련한 각종 함수들을 제공해주는 라이브러리입니다.  

//문자열의 길이를 제공해주는 함수인 내부함수 strlen()을 사용한 프로그램입니다. 
int main(void){
	char input[5] = "Love"; //배열을 선언함과 동시에 특정한 문자열을 배열에 넣어줍니다.
	printf("문자열의 길이 : %d\n", strlen(input));
	return 0;
}

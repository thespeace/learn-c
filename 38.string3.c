#include <stdio.h>
#include <string.h>

//문자열 비교함수인 strcmp()를 활용한 프로그램입니다. 
int main(void){
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo)); // strcmp() : 인자 2개를 사전적으로 비교하면서 0,-1,1을 반환해줍니다. 사전적으로 동일(0), 첫번째 인자가 앞에 정렬(-1), 두번째 인자가 앞에 정렬(1)
	return 0;
}

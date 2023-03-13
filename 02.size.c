/*
	"A(변수) = 30(상수)"
	 
	변수 (Variables)
	프로그램이 실행되는 동안 언제든지 저장된 값이 변경될 수 있는 공간을 의미한다. ex) 두 점간의 거리를 의미하는 Distance 
	<->
	상수(Constant)
	한 번 정해지면 값을 변경할 필요가 없는 데이터를 의미한다.  ex) 원주율 3.141592
*/
#include <stdio.h>

int main(void){
	int x; // 자료형이 int인 변수 "x" 선언. 
	x = 5; // int는 정수형만 선언할 수 있다. 
	printf("%d\n", x); // %d : int형 값 출력, \n : 줄바꿈 
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x)); // sizeof(변수) : c언어에서 제공하는 기본 함수로, 변수의 메모리 크기를 알려준다.
														   // int는 memory, 즉 RAM에서 4byte만큼의 공간을 사용한다. 
	return 0;
}

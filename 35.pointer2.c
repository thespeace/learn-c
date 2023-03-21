#include <stdio.h>

//포인터 변수의 값을 바꾸어 보기 
int main(void){
	int i = 10; // 처음 i값을 10으로 선언하고- 
	int *p; //포인터 p가 가리키는 값에- 
	p = &i; // i를 할당해주고- 
	printf("i = %d\n", i); // 출력 : 10; 
	*p = 20; // 포인터 p가 가리키는 값을 20으로 바꾸니까- 
	printf("i = %d\n", i); // i는 20의 값으로 변환되었습니다. 
	return 0;
}

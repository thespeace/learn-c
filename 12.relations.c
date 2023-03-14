#include <stdio.h> 

int main(void){
	int x = 50, y = 30;
	/* 		x와 y와 같은 값을 가지고 있는가? 
	 흔히 대수학에서는  x = y -> x와 y가 같은 상황 그 자체를 의미하지만, 프로그래밍에서는 x == y -> true, x와 y가 같은 값을 가지고 있는 것입니다. */
	printf("x가 y와 같은가 ? %d\n", x == y); //  0 == false
	y = 50;
	printf("x가 y와 같은가 ? %d\n", x == y); //  1 == true, 사실 내부적으로 0은 false(거짓)을 그 이상의 수는 true(참)을 의미합니다.
	printf("x가 y와 다른가 ? %d\n", x != y); //  ! : not이라는 의미, != : 같지 않은지에 대해 물어보는 것입니다.
	y = 30;
	printf("x가 y보다 큰가 ? %d\n", x > y);
	printf("x가 y보다 작은가 ? %d\n", x < y);
	printf("x에 y값을 넣으면 ? %d\n", x = y); // = : 프로그래밍에서는 x에 y를 넣는다는 의미를 가지고 있습니다. 
	
	/*
		이러한 관계연산자는 제어문에서 조건식으로 많이 쓰입니다. 
	*/
	if(x == y){// 참인 경우 실행.
		printf("true : 1 / x = %d , y = %d\n", x, y);
	}else{ //거짓인 경우 실행.
		printf("false : 0 / x = %d , y = %d\n", x, y);
	}
	return 0;
}

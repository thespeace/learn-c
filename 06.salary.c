#include <stdio.h>
#define MONTHS 12 // #define "변수명" "값" : 상수에 대한 정의 ex) 원주율, 사각형을 구하는 공식 등등 이미 정해진 수학적 법칙 같은 것들. 

int main(void){
	double monthSalary = 1000.5;
	printf("$ %.2f", monthSalary * MONTHS); //상수를 사용하여 연봉구하기.
	return 0;
}

/*
	Data type?
	 전체 자료형의 종류로는 1)사용자 정의 자료형(User Defined) : Enum, Structure, Union
	 						2)파생 자료형(Derived) : Array, Pointer, Function 등이 있지만
	 흔히 말하는 자료형은   3)원시 자료형(Primitive)만을 말하는 경우가 많습니다.
	 C언어에서 문자를 표현할 때는 'char' 자료형을 이용하며 숫자를 표현하고자 할 때는 int, float, double 자료형을 사용합니다.
	 void는 자료형 자체가 없다는 의미입니다. 여기서 주의할 점은 C언어에서는 따로 문자열을 저장하는 string 자료형이 없고 char 자료형만을 사용하기 때문에 문자열 표현을 위해서는 char 자료형을 연속적으로 사용해야 합니다. 
*/

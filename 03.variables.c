#include <stdio.h>

int main(void){
	int x = 50;
	float y = 123456789.123456789; /* float : 실수(소수점까지 표현) 자료형으로 4byte까지만 사용할 수 있기 때문에 해당 범위까지만 사용할 수 있다. 
								              때문에, 4byte를 넘어 사용하게되면 범위를 넘어서는 값은 의미가 없는 트래쉬 값으로 채워 질 수가 있다. 
								              즉 float는 4byte이상의 값은 포함할 수 없다. */
	double z =  123456789.123456789; /* double : 8byte의 저장 공간을 가진 실수를 선언 할 수 있다. */
	printf("x= %d\n", x);
	printf("y= %.2f\n", y); // %.2f : 소수점 두 번째 자리까지의 실수를 출력. 
	printf("z= %.2f\n", z);
	return 0;
}

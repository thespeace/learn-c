#include <stdio.h>

//구조체의 비교를 활용한 예시입니다.
struct point {
	int x;
	int y;
};

void comparePoint (struct point p1, struct point p2){ // 구조체를 함수로 만들어서 관리 할 수 있습니다. 그리고 이와 같이 관리하는 것은 훨씬 더 체계적일 뿐만 아니라 설계적으로도 완성도가 높습니다. 
	/*if(p1 == p2){ // 구조체는 두 개의 변수 자체를 직접 비교하는 것은 불가능합니다. p1과 p2는 그 자체로 쓰일수가 없기 때문입니다. 
		printf("p1과 p2가 같습니다.");
	}*/
	if((p1.x == p2.x) && (p1.y == p2.y)){ //각 구조체 별로 특징을 잡아서 비교하여야 합니다. 
		printf("p1과 p2가 같습니다.");
	}
}

int main(void){
	struct point p1;
	struct point p2;
	
	p1.x = 30;
	p1.y = 10;
	
	p2.x = 30;
	p2.y = 10;
	
	comparePoint(p1, p2);
	
	return 0;
}

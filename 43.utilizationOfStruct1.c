#include <stdio.h>
#include <math.h>

// 구조체를 이용해서 사각형의 넓이와 둘레를 구하는 프로그램입니다. 
struct point{ 
	int x;
	int y;
};

struct rect { //사각형 구조체. 
	struct point p1; //가장 왼쪽 위의 점. 
	struct point p2; //가장 아랫쪽의 점. 
};

int main(void){
	struct rect r; 
	int w, h, area, peri; //area는 넓이, peri는 둘레입니다.
	
	printf("왼쪽 상단의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	
	printf("오른쪽 하단의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p2.x - r.p1.x); // 너비의 절댓값를 구합니다.
	h = abs(r.p2.y - r.p1.y);
	
	area = w * h;
	peri = 2 * w +2 * h;
	
	printf("사각형의 넓이는 %d이고, 둘레는 %d입니다.", area, peri);
	
	return 0;
}


/*
	구조체의 활용
	 데이터베이스와 1:1로 매칭이 가능한 점에서 구조체가 굉장히 의미가 있습니다. 또한 보안적인 면에서도 굉장히 메리트가 있습니다.
	그리고 프로그램의 크기가 커지면 커질수록 C언어에서는 구조체의 활용이 불가피합니다.
	따라서 다양한 상황에서 그 상황에 맞게 적절하게 구조체를 활용하는 능력은 C언어 개발자에게 필수불가결합니다. 
*/

#include <stdio.h>

//����ü�� �񱳸� Ȱ���� �����Դϴ�.
struct point {
	int x;
	int y;
};

void comparePoint (struct point p1, struct point p2){ // ����ü�� �Լ��� ���� ���� �� �� �ֽ��ϴ�. �׸��� �̿� ���� �����ϴ� ���� �ξ� �� ü������ �Ӹ� �ƴ϶� ���������ε� �ϼ����� �����ϴ�. 
	/*if(p1 == p2){ // ����ü�� �� ���� ���� ��ü�� ���� ���ϴ� ���� �Ұ����մϴ�. p1�� p2�� �� ��ü�� ���ϼ��� ���� �����Դϴ�. 
		printf("p1�� p2�� �����ϴ�.");
	}*/
	if((p1.x == p2.x) && (p1.y == p2.y)){ //�� ����ü ���� Ư¡�� ��Ƽ� ���Ͽ��� �մϴ�. 
		printf("p1�� p2�� �����ϴ�.");
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
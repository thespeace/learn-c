#include <stdio.h>
#include <stdlib.h>

//����ü�� ���� �޸� �Ҵ��ϴ� ���� ���α׷��Դϴ�. 
struct Book{
	int number;
	char title[100];
};

void showBook(struct Book *p, int n){ // Book *p : Book�̶�� ����ü�� �����޸𸮿� �Ҵ��� ������ ���� ��ü�� �ǹ��մϴ�. 
	int i;
	for(i = 0; i < n; i++){
		printf("��ȣ %d : %s\n", (p + i)->number, (p + i)->title);
	}
}

int main(void){
	struct Book *p;
	p = (struct Book *)malloc(2 * sizeof(struct Book));
	if(p = NULL){
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}
	
	p->number = 1; // ����ü �����ʹ� -> ȭ��ǥ������� �ش� ������ ���� �����մϴ�. p�� �ش� �ϴ� ����ü�� number��� ������ 1�̶�� ���� ���� �� �ֽ��ϴ�.
	strcpy(p->title, "C Programming");
	
	(p + 1)->number = 2;
	strcpy((p + 1)->title, "Data Structure"); 
	
	showBook(p, 2);
	free(p);
	
	return 0;
}

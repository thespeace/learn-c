#include <stdio.h>
#include <stdlib.h>

//구조체에 동적 메모리 할당하는 예제 프로그램입니다. 
struct Book{
	int number;
	char title[100];
};

void showBook(struct Book *p, int n){ // Book *p : Book이라는 구조체를 동적메모리에 할당한 포인터 변수 자체를 의미합니다. 
	int i;
	for(i = 0; i < n; i++){
		printf("번호 %d : %s\n", (p + i)->number, (p + i)->title);
	}
}

int main(void){
	struct Book *p;
	p = (struct Book *)malloc(2 * sizeof(struct Book));
	if(p = NULL){
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	
	p->number = 1; // 구조체 포인터는 -> 화살표모양으로 해당 변수에 접근 가능합니다. p에 해당 하는 구조체의 number라는 변수에 1이라는 값을 넣을 수 있습니다.
	strcpy(p->title, "C Programming");
	
	(p + 1)->number = 2;
	strcpy((p + 1)->title, "Data Structure"); 
	
	showBook(p, 2);
	free(p);
	
	return 0;
}


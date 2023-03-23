#include <stdio.h>
#define SIZE 5

//구조체의 배열을 활용하여 학생들의 정보를 저장하는 프로그램입니다. 
struct student {
	int number;
	char name[20];
	double grade;
};

int main(void){
	struct student list[SIZE]; //학생 구조체를 리스트 변수로 만들어줍니다. 
	int i;
	
	for(i = 0; i < SIZE; i++){ // 입력 받은 값은 해당 프로그램에 저장이 됩니다. 즉, 프로그램이 위치하고있는 램에 입력받은 정보가 일시적으로 저장됩니다. 
		printf("학번을 입력하세요 : ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하세요 : ");
		scanf("%s", &list[i].name);
		printf("학점을 입력하세요 : ");
		scanf("%lf", &list[i].grade);
	}
	
	for(i = 0; i < SIZE; i++){
		printf("학번 : %d, 이름 : %s, 학번 %.1f\n", list[i].number, list[i].name, list[i].grade);
	}
	
	return 0;
}

// 이러한 코드 구현 방법은 표준적이고 엄청나게 많이 사용이 됩니다. 

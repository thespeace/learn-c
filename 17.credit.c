#include <stdio.h>

int main(void){
	int score = 85; //학생의 점수를 의미합니다.
	if(score >= 90){
		printf("당신의 학점은 A입니다.\n");
	}else if(score >= 80){ //위의 if문이 존재할때만 사용 가능합니다. if문에 해당하지 않으면 else if문의 조건을 체크하게 됩니다. 
		printf("당신의 학점은 B입니다.\n");
	}else if(score >= 70){
		printf("당신의 학점은 C입니다.\n");
	}else{ // else문 또한 위에 if문이 존재할때만 사용 가능합니다. 위에 있는 모든 if문의 조건이 전부 다 해당 되지 않을때 else문 안의 코드가 최후로 실행이 됩니다. 
		printf("당신의 학점은 F입니다.\n");
	}
	return 0;
}

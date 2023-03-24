#include <stdio.h>

//파일을 하나 열고(만들고) 입력하는 프로그램입니다. 
int main(void){
	FILE *fp = NULL; //file 객체를 만들어서 포인트 변수로 만들어 null값을 넣어줍니다. 
	fp = fopen("output.txt","w");
	// w -> 쓰기 모드(Write), r -> 읽기 모드(Read)
	if(fp == NULL){ //일반적인 예외처리. 
		printf("파일 열기에 실패했습니다.\n");
	}
	else{
		printf("파일 열기에 성공했습니다.\n");
	}
	fputc('H', fp); // fputc : file put char. 
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fputc('W', fp);
	fputc('O', fp);
	fputc('R', fp);
	fputc('L', fp);
	fputc('D', fp);
	fclose(fp); 
	
	return 0;
}

/*
	파일입출력
	 파일입출력은 다양한 프로그램을 개발할 때 자주 사용되는 기능입니다.
	예를 들면 파일입출력을 통하여 게임에서 현재의 데이터를 저장하고 다시 불러오거나 할 수 있습니다.
	뿐만 아니라 프로그램 전반에 사용되는 다양한 데이터를 처리하고 저장하여 보관할 수 있다는 점에서 유용합니다.
*/

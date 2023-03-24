#include <stdio.h>

//텍스트 파일을 읽는 프로그램입니다. 
int main(void){
	FILE *fp = NULL;
	int c;
	
	fp = fopen("output.txt", "r"); // 해당 파일이 같은 경로에 존재해야 합니다. 
	
	if(fp == NULL){
		printf("파일 열기에 실패했습니다.\n");
	}else{
		printf("파일 열기에 성공했습니다.\n");
	}
	
	while((c = fgetc(fp)) != EOF ){ // fgetc : file get char, 지금 열려있는 파일에서 문자 하나를 읽어서 c에 저장한다는 의미입니다. 파일의 끝을 의미하는 EOF이 아니라면 계속 읽고 저장합니다. 
		putchar(c);
	}
	
	fclose(fp);
	
	return 0;
}

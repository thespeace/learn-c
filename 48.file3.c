#include <stdio.h>
#include <string.h>

//텍스트 파일을 분석하는 프로그램입니다. 
int main(void) {
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("파일 이름을 입력하세요 : ");
	scanf("%s", fname);
	
	printf("탐색할 단어를 입력하세요 : ");
	scanf("%s", word);
	
	if((fp == fopen(fname, "r")) == NULL) { //읽기 모드로 해당 파일을 열어줍니다. 
		fprintf(stderr, "파일을 %s을 열 수 없습니다.\n", fname); // fprintf : 파일 관련 에러를 출력. 
		return 0;
	}
	
	while(fgets(buffer, 256, fp)){ // fp에서 256길이 만큼 읽어서 buffer에 담아줍니다. 
		line++;
		if(strstr(buffer, word)){ // strstr : word가 buffer에 포함이 되어있는지에 대한 여부를 얻을 수 있습니다. 
			printf("라인 %d : 단어 %s이(가) 발견되었습니다.\n", line, word);
		}
	}
	
	fclose(fp);
	
	return 0;
}

#include <stdio.h>

//�ؽ�Ʈ ������ �д� ���α׷��Դϴ�. 
int main(void){
	FILE *fp = NULL;
	int c;
	
	fp = fopen("output.txt", "r"); // �ش� ������ ���� ��ο� �����ؾ� �մϴ�. 
	
	if(fp == NULL){
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}else{
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	
	while((c = fgetc(fp)) != EOF ){ // fgetc : file get char, ���� �����ִ� ���Ͽ��� ���� �ϳ��� �о c�� �����Ѵٴ� �ǹ��Դϴ�. ������ ���� �ǹ��ϴ� EOF�� �ƴ϶�� ��� �а� �����մϴ�. 
		putchar(c);
	}
	
	fclose(fp);
	
	return 0;
}

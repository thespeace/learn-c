#include <stdio.h>
#include <string.h>

//�ؽ�Ʈ ������ �м��ϴ� ���α׷��Դϴ�. 
int main(void) {
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("���� �̸��� �Է��ϼ��� : ");
	scanf("%s", fname);
	
	printf("Ž���� �ܾ �Է��ϼ��� : ");
	scanf("%s", word);
	
	if((fp == fopen(fname, "r")) == NULL) { //�б� ���� �ش� ������ �����ݴϴ�. 
		fprintf(stderr, "������ %s�� �� �� �����ϴ�.\n", fname); // fprintf : ���� ���� ������ ���. 
		return 0;
	}
	
	while(fgets(buffer, 256, fp)){ // fp���� 256���� ��ŭ �о buffer�� ����ݴϴ�. 
		line++;
		if(strstr(buffer, word)){ // strstr : word�� buffer�� ������ �Ǿ��ִ����� ���� ���θ� ���� �� �ֽ��ϴ�. 
			printf("���� %d : �ܾ� %s��(��) �߰ߵǾ����ϴ�.\n", line, word);
		}
	}
	
	fclose(fp);
	
	return 0;
}

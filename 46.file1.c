#include <stdio.h>

//������ �ϳ� ����(�����) �Է��ϴ� ���α׷��Դϴ�. 
int main(void){
	FILE *fp = NULL; //file ��ü�� ���� ����Ʈ ������ ����� null���� �־��ݴϴ�. 
	fp = fopen("output.txt","w");
	// w -> ���� ���(Write), r -> �б� ���(Read)
	if(fp == NULL){ //�Ϲ����� ����ó��. 
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	else{
		printf("���� ���⿡ �����߽��ϴ�.\n");
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
	���������
	 ����������� �پ��� ���α׷��� ������ �� ���� ���Ǵ� ����Դϴ�.
	���� ��� ����������� ���Ͽ� ���ӿ��� ������ �����͸� �����ϰ� �ٽ� �ҷ����ų� �� �� �ֽ��ϴ�.
	�Ӹ� �ƴ϶� ���α׷� ���ݿ� ���Ǵ� �پ��� �����͸� ó���ϰ� �����Ͽ� ������ �� �ִٴ� ������ �����մϴ�.
*/

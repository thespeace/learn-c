#include <stdio.h>

int main(void){
	char x = 'A'; // char(character) : ���ڿ� ������ ������ �� ���˴ϴ�.
	printf("char A�� : %c\n", x); // %c : char Ÿ���� ������ ���.
	
	char y = 65;  // char�� ���ڸ� ������ ���� ���� ��ü�� �����ϴ� ���� �ƴ϶� ���ڿ� �ش��ϴ� �������� �����ϰ� �˴ϴ�. 
				  // �� ��Ģ�� "�ƽ�Ű(ASCII) �ڵ�"��� �θ��ϴ�.
	printf("char 65�� : %c", y);
	
	int z = 65;
	printf("int 65�� : %c", z); // %c���� ����Ѵٸ� int Ÿ���� �������� �˾Ƽ� char���·� ��ȯ�� �Ǿ ����� �˴ϴ�. 
	
	char xx = 'B';
	printf("char B�� : %d", xx);// %d�� char Ÿ�� ������ ���������� ����� ���� �ִ�. 
	return 0;
}

/*
	Variables Data Types?
	���������� Integer, Character, Float, Double�� �ֽ��ϴ�. 
*/

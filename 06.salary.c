#include <stdio.h>
#define MONTHS 12 // #define "������" "��" : ����� ���� ���� ex) ������, �簢���� ���ϴ� ���� ��� �̹� ������ ������ ��Ģ ���� �͵�. 

int main(void){
	double monthSalary = 1000.5;
	printf("$ %.2f", monthSalary * MONTHS); //����� ����Ͽ� �������ϱ�.
	return 0;
}

/*
	Data type?
	 ��ü �ڷ����� �����δ� 1)����� ���� �ڷ���(User Defined) : Enum, Structure, Union
	 						2)�Ļ� �ڷ���(Derived) : Array, Pointer, Function ���� ������
	 ���� ���ϴ� �ڷ�����   3)���� �ڷ���(Primitive)���� ���ϴ� ��찡 �����ϴ�.
	 C���� ���ڸ� ǥ���� ���� 'char' �ڷ����� �̿��ϸ� ���ڸ� ǥ���ϰ��� �� ���� int, float, double �ڷ����� ����մϴ�.
	 void�� �ڷ��� ��ü�� ���ٴ� �ǹ��Դϴ�. ���⼭ ������ ���� C������ ���� ���ڿ��� �����ϴ� string �ڷ����� ���� char �ڷ������� ����ϱ� ������ ���ڿ� ǥ���� ���ؼ��� char �ڷ����� ���������� ����ؾ� �մϴ�. 
*/

#include <stdio.h>
#include <limits.h> // ���̺귯���� �������� ���� �������� ��ȿ������ �˾Ƴ��� ���� ����մϴ�.  

int main(void){
	int x = INT_MAX; // INT_MAX : limits.h ���̺귯���� ���������� "int�� �ִ밪"�� ��Ÿ���ϴ�. 
	printf("%d", x);
	return 0;
} 



/*  	"limits.h"
	   �̸� : ����

CHAR_BIT    : char�� ��Ʈ ��
SCHAR_MIN   : signed char�� �ּҰ�
SCHAR_MAX   : signed char�� �ִ밪
UCHAR_MAX   : unsigned char�� �ִ밪
CHAR_MIN    : char�� �ּҰ�
CHAR_MAX    : char�� �ִ밪
MB_LEN_MAX  : ��Ƽ����Ʈ ������ �ִ� ����Ʈ ��
SHRT_MIN    : short int�� �ּҰ�
SHRT_MAX    : short int�� �ִ밪
USHRT_MAX   : unsigned short int�� �ִ밪
INT_MIN     : int�� �ּҰ�
INT_MAX     : int�� �ִ밪
UINT_MAX    : unsigned int�� �ִ밪
LONG_MIN    : long int�� �ּҰ�
LONG_MAX    : long int�� �ִ밪
ULONG_MAX   : unsigned long int�� �ִ밪*/

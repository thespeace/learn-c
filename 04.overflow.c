#include <stdio.h>
#include <limits.h> // 라이브러리의 변수명을 통해 정수형의 유효범위를 알아내기 위해 사용합니다.  

int main(void){
	int x = INT_MAX; // INT_MAX : limits.h 라이브러리의 변수명으로 "int의 최대값"을 나타냅니다. 
	printf("%d", x);
	return 0;
} 



/*  	"limits.h"
	   이름 : 설명

CHAR_BIT    : char의 비트 수
SCHAR_MIN   : signed char의 최소값
SCHAR_MAX   : signed char의 최대값
UCHAR_MAX   : unsigned char의 최대값
CHAR_MIN    : char의 최소값
CHAR_MAX    : char의 최대값
MB_LEN_MAX  : 멀티바이트 문자의 최대 바이트 수
SHRT_MIN    : short int의 최소값
SHRT_MAX    : short int의 최대값
USHRT_MAX   : unsigned short int의 최대값
INT_MIN     : int의 최소값
INT_MAX     : int의 최대값
UINT_MAX    : unsigned int의 최대값
LONG_MIN    : long int의 최소값
LONG_MAX    : long int의 최대값
ULONG_MAX   : unsigned long int의 최대값*/

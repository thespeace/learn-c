#include <stdio.h>

//간단한 계산기 프로그램을 만들어 보자.
int main(void){
	char o; 
	int x, y;
	while(1){
		printf("수식을 입력하세요 : ");
		scanf("%d %c %d", &x, &o, &y);
		if(o == '+'){
			printf("%d %c %d = %d\n", x, o, y, x + y);
		}else if(o == '-'){
			printf("%d %c %d = %d\n", x, o, y, x - y);
		}else if(o == '*'){
			printf("%d %c %d = %d\n", x, o, y, x * y);
		}else if(o == '/'){
			printf("%d %c %d = %d\n", x, o, y, x / y);
		}else if(o == '%'){
			printf("%d %c %d = %d\n", x, o, y, x % y);
		}else{
			printf("입력이 잘못 되었습니다.\n");
		}
		getchar(); // 단 한개의 문자를 입력 받겠다는 의미, 입력받는 줄바꿈(enter)을 효율적으로 처리하기 위해 "버퍼" 처리해줍니다. 
		printf("프로그램을 종료하시겠습니까? (y/n)\n");
		scanf("%c", &o);
		if(o == 'n' || o =='N'){
			continue; // continue : 반복문이 수행 될 때, 다시 처음으로 돌아가서 진행을 하겠다는 의미입니다. 아래의 어떤 코드가 있던 간에 다 무시가 되고  
			printf("continue로 인해 해당 코드는 실행 되지 않고 함수를 처음부터 다시 시작합니다.");
		}else if(o == 'y' || o =='Y'){
			break;
		}else{
			printf("입력이 잘못되었습니다.\n");
		}
	}
	return 0;
}

/*
	기본 입출력?
	 C언어에서는 기본 입출력 함수를 이용하여 사용자와 상호작용할 수 있습니다.
	대표적으로 scanf("%d", &x);는 x라는 정수에 사용자에게 입력 받은 값을 삽입한다는 의미의 코드입니다.
	여기에서 "&"는 특정한 변수에 메모리 주소, 그 자체를 의미합니다. 나중에 더 자세히 알아 보도록 하겠습니다.
	그리고 사용자로부터 입력 받을 자료형에 따라서 %d, %c, %f, %if 등의 다양한 문법을 사용해야 한다는 것에 유의해야 합니다.
	그리고 반면에 프로그램에서 사용자에게 메시지를 출력할 때는 가장 대표적으로 printf();를 사용합니다.
	물론 이들은 텍스트 기반의 입출력이며 나중에 GUI를 배우게 되면 사용자에게 글자 뿐만 아니라 이미지도 보여줄 수 있습니다.
*/
/*
	버퍼(Buffer)란?
	 버퍼(Buffer)의 사전적인 의미는 완충제 또는 완충제의 역할을 하는 것입니다. 컴퓨터 공학에서 불리는 버퍼 또한 장치와 장치 간의 데이터 전송을 할 때 완충작용을 하기 위한 임시 데이터 저장 공간입니다.
	
	예를 들어,  입력스트림을 통해 키보드와 컴퓨터(CPU)가 연결되어 있다고 가정해 봅시다.
	
	키보드라는 입력장치와 컴퓨터(CPU)의 연산장치는 데이터를 처리하는 속도가 다릅니다.
	예를 들어 아래와 같은 처리속도를 가졌다고 가정해 봅시다.
		- 키보드는 초당 1회의 입력을 받을 수 있다.
		- 컴퓨터(CPU)는 초당 10회의 연산을 수행할 수 있다.
	만약 그림과 같이 완충장치가 존재하지 않는 상태에서 키보드에서 스트림을 통해 CPU로 데이터를 전달한다면 아무리 성능이 좋은 CPU라고 해도 초당 1회의 연산밖에 할 수 없습니다.
	입력장치의 데이터 처리 수행 능력이 초당 1회밖에 안되기 때문입니다.

	이런 문제를 해결하기 위해서 버퍼라는 임시저장소를 만들게 됩니다. 키보드로부터 입력되는 데이터들을 모아서 한 번에 CPU로 전달을 해주는 것입니다.
	그렇다면 CPU는 정상적으로 자신의 성능만큼 업무를 수행할 수 있게 됩니다.
*/

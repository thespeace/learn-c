#include <stdio.h>
#include <stdlib.h> 

//���� �޸𸮷� ���ĺ� ����ϴ� ���α׷��Դϴ�. 
int main(void){
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char)); // 100 * sizeof(char) : �ϳ��� ���ڰ� �� �� �ִ� ���� * 100, �� 100���� ���ڰ� �� �� �ִ� ������ �Ҵ�� ���Դϴ�. �׸��� �迭�� ���� ������ �����Դϴ�.
	if(pc == NULL){
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}
	/*pc�� ����Ű�� �����͸� 1�� ������Ű�� ���ĺ� �ҹ��ڸ� �����մϴ�.*/
	for(i = 0; i < 26; i++){ //���ĺ��� ������ 26�� �Դϴ�. 
		*(pc +i) = 'a' + i; // *(pc + i) : pc������ ���ڿ��迭�� �����Ѵٸ� pc[i]�� �����Ͻø� ���ذ� �����ϴ�.
							// 'a' + i : �ƽ�Ű �ڵ带 ����մϴ�. a�� 97�̰� b�� 98�̴� ��� ���ڸ� ���� �� �ֽ��ϴ�. 
	}
	*(pc + i) = 0; //�ƽ�Ű �ڵ忡�� 0�� NULL�� �ǹ��մϴ�. �� �ش� ���α׷����� z�� ���� �ּҿ� NULL�� �����ϴ� ���Դϴ�. ���ڿ����� NULl�� ������ �װ��� ���ڿ��� ���Ḧ �ǹ��մϴ�.
	
	printf("%s\n", pc); 
	free(pc); // �޸� �Ҵ� ����. 
	return 0;
}
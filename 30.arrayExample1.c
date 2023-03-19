#include <stdio.h>
#include <limits.h>
#define NUMBER 5


int main(void){
	int i, max, min, index;
	int array[NUMBER]; // 배열 선언.
	max = 0;
	index = 0;
	// array[0] ~ array[4] : 총 5개가 들어갈 수 있는 크기의 배열이 선언되었습니다.
	
	//최댓값 구하기. 
	for(i = 0; i < NUMBER; i++){
		scanf("%d", &array[i]);
		if(max < array[i]){
			max = array[i];
			index = i;
		}
	} 
	printf("가장 큰 값은 %d입니다. 그리고 %d번째에 위치해 있습니다.\n", max, index + 1);
	
	min = INT_MAX;
	//최솟값 구하기. 
	for(i = 0; i < NUMBER; i++){
		scanf("%d", &array[i]);
		if(min > array[i]){
			min = array[i];
			index = i;
		}
	} 
	
	printf("가장 작은 값은 %d입니다. 그리고 %d번째에 위치해 있습니다.", min, index + 1);
	return 0;
}

/*
	배열?
	다양한 데이터를 삽입할 수 있는 공간으로 데이터가 많을 때 사용합니다.
	가장 간단한 프로그램 예제에서는 단순히 한 두 개의 변수만으로 프로그램을 작동시킬 수 있었지만 현실에서의 다양한 프로그램에는 아주 많응 양의 데이터가 사용되는 것이 일반적입니다.
	따라서 데이터가 많을 때 주로 배열을 이용할 수 있습니다. 이 때 배열은 한없이 많을 수 있으면서도 그 데이터 개수가 변경될 수 있는 데이터들의 집합을 지정해줄 수 있기에 효과적으로 대부분의 프로그램에 사용됩니다. 
*/

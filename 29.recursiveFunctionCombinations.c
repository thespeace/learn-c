#include <stdio.h>

//프로그래밍으로 수학적 문제를 재귀함수를 사용하여 접목한 프로그램입니다. 
int nCr(int n, int r){
	if(r == 0 || r == n){
		return 1;
	}else{
		return nCr(n - 1, r - 1) + nCr(n - 1, r);
	}
}

int main(void){
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d", nCr(n, r));
	return 0;
}

/*
	서로 다른 n개의 물건에서 순서를 생각하지 않고 r개를 택할 때, 이것은 n개에서 r개를 택하는 조합이라 하고, 이 조합의 수를 기호로 nCr와 같이 나타냅니다.
	공식은 다음과 같습니다.
	
	"r이 0이거나 r이 n이라면 1이며, nCr(n - 1, r - 1) + nCr(n - 1, r)와 같다"
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int N;

	scanf("%d", &N);

	//循环实现从1打印到N
	void printN(int N){
		int i;
		for( i=1; i<=N; i++){
			printf("%d\n", i);
		}
		return;
	}

	//递归实现从1打印到N
	// void printN ( int N ){
	// 	if( N ){
	// 		printN( N - 1);
	// 		printf("%d\n", N);
	// 	}
	// 	return;
	// }
	printN( N );

	system("pause");
	return 0;
}
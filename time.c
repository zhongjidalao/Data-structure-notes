#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//clock_t是clock()函数返回的变量类型
clock_t start, stop;

//记录被测函数运行时间，以秒为单位
double duration;
#define MAXN 10
double f1( int n, double a[], double x );
double f2( int n, double a[], double x );

int main(int argc, char const *argv[])
{
	int i;
	double a[MAXN];
	for ( i=0; i<MAXN; i++) a[i] = (double)i;

	start = clock();
	f1(MAXN-1, a, 1.1);
	stop = clock();
	duration = ((double)(stop - start))/CLK_TCK;
	printf("ticks1 = %f\n", (double)(stop - start));
	printf("duration1 = %6.2e\n", duration);

	start = clock();
	f2(MAXN-1, a, 1.1);
	stop = clock();
	duration = ((double)(stop - start))/CLK_TCK;
	printf("ticks2 = %f\n", (double)(stop - start));
	printf("duration2 = %6.2e\n", duration);

	system("pause");
	return 0;
}
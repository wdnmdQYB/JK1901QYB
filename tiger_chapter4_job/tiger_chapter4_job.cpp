// tiger_chapter4_job.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
# include<stdlib.h>
# include<time.h>

int ch43_caculate_sum(void)
{
	int deno, flag;
	double i, pi;

	flag = 1;
	deno = 1;
	i = 1.0;
	pi = 0;

	while (fabs(i) <= 0.000001);
	{
		i = flag*1.0 / deno;
		pi = pi + i;
		flag = -flag;
		deno = deno + 3;
	}
	printf("pi = %.6f\n", pi);
	return 0;
}

int ch46_guess_num()
{
	int count, i, m, n, sum, q, w;

	printf("Enter m：");
	scanf("%d", &m);
	printf("Enter n：");
	scanf("%d", &n);
	count = 0;
	sum = 0;
	for (q = m; q <= n; q++) {
		w = sqrt(q);
		for (i = 2; i <= w; i++)
			if (q % i == 0)
				break;
		if (i > w) {
			printf("%6d", q);
			sum = sum + q;
			count++;
			if (count % 10 == 0)
				printf("\n");
		}
	}
	printf("\n");
	printf("sum=%d", sum);

	return 0;
}

int main()
{
	//ch43_caculate_sum();
	ch46_guess_num();
    return 0;
}


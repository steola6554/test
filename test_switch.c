#include "test.h"

int test_switch()
{
	int d1, d2, d3;
	scanf("%d,%d,%d", &d1, &d2, &d3);

	switch (d3)
	{
	case 0:
		hello();
		break;
	case 1:
		printf("d1とd2を足した結果は%dです", sum(d1, d2));
		break;
	case 2:
		printf("d1とd2を掛けた結果は%dです", mul(d1, d2));
		break;
	default:
		printf("照合の結果、合致する関数はありませんでした。");
		break;
	}
	
	return (0);
}
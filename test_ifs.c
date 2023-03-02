#include "test.h"

int test_if()
{
	int d;
	scanf("%d", &d);

	if (d >= 10)
		printf("dの数値は10以上です...%d", d);
	else if (d > 0 || d < 10)
		printf("dの数値は1以上10未満です...%d", d);
	else
		printf("dの数値は0以下です");
	
	return (0);
}
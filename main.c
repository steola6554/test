#include "test.h"

int main()
{
	int judg;
	printf("1~8までの整数値を入力して下さい。：");
	scanf("%d", &judg);
	switch (judg)
	{
	case 1:
		hello();
		break;

	case 2:
		test_switch();
		break;

	case 3:
		test_for();
		break;

	case 4:
		test_do_while();
		break;

	case 5:
		test_while();
		break;

	case 6:
		test_if();
		break;

	case 7:
		int x, y;
		printf("足し合わせたい整数値を2つ入力して下さい。：");
		scanf("%d %d", &x, &y);
		printf("%d",sum(x, y));
		break;

	case 8:
		printf("掛け合わせたい整数値を2つ入力して下さい。：");
		scanf("%d %d", &x, &y);
		printf("%d",mul(x, y));
		break;

	default:
		printf("参照できる関数はありませんでした");
		break;
	}

	return (0);
}
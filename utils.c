#include "test.h"

int sum(int x, int y) // xとyの足し算を返す関数
{
	return (x + y);
}

int mul(int x, int y) // xとyの掛け算を返す関数
{
	return (x * y);
}

int hello() // 呼び出されたら"Hello,World!"と表示するだけの関数
{
	printf("Hello,World!\n");

	return (0);
}

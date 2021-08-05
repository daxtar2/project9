//以十进制，八进制，十六进制打印十进制数100
//  %d       %o       %x
// 显示0以表示八进制，显示0x或0X表示十六进制
#include<stdio.h>
int main(void)
{
	int x = 100;

	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
	// dec, oct(al),hex 分别表示十 八 十六 进制
	//#对o类，在输出时加前缀0；对x类， 在输出时加前缀0x或者0X
	return 0;
}

//��ʮ���ƣ��˽��ƣ�ʮ�����ƴ�ӡʮ������100
//  %d       %o       %x
// ��ʾ0�Ա�ʾ�˽��ƣ���ʾ0x��0X��ʾʮ������
#include<stdio.h>
int main(void)
{
	int x = 100;

	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
	// dec, oct(al),hex �ֱ��ʾʮ �� ʮ�� ����
	//#��o�࣬�����ʱ��ǰ׺0����x�࣬ �����ʱ��ǰ׺0x����0X
	return 0;
}

#include <stdio.h>
int main(void)
{
	int i = 0;
	int one, two, five;
	for (five = 0; five <= 10; five++)
	{
		two = 40 - 4 * five;
		one = 60 - two - five;
		if (one + two * 2 + five * 5 == 100)
		{
			i++;
			printf ("�һ�����%2d��1��Ӳ��%2dö��2��Ӳ��%2dö��5��Ӳ��%2dö\n", i, one, two, five);
		}
	}
	printf ("����%d�ֶһ�����\n", i); 
	return 0;
}

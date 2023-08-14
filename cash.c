#include <stdio.h>
#include <math.h> // for round()

int main(void)
{
	float c;
	
	do 
	{
		printf("Cash Owned: Rs.");
		scanf("%f", &c);
	}
	while(c <= 0);
	
	int cnt = c;
	int x = 0;
	
	while (cnt != 0)
	{
		if (cnt >= 50)
		{
			cnt -= 50;
			x++;
		}
		else if (cnt >= 20)
		{
			cnt -= 20;
			x++;
		}
		else if (cnt >= 10)
		{
			cnt -= 10;
			x ++;
		}
		else if (cnt >= 5)
		{
			cnt -= 5;
			x ++;
		}
		else if (cnt >= 2)
		{
			cnt -= 2;
			x++;
		}
		else
		{
			cnt--;
			x++;
		}
	}
	
	printf("%d\n", x);
	//getch();
	
	return 0;
}

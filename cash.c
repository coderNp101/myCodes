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
	    if (cnt >= 1000)
		{
			cnt -= 1000;
			x++;
			printf("1000, ");
		}
	    else if (cnt >= 500)
		{
			cnt -= 500;
			x++;
			printf("500, ");
		}
	    else if (cnt >= 100)
		{
			cnt -= 100;
			x++;
			printf("100, ");
		}
		else if (cnt >= 50)
		{
			cnt -= 50;
			x++;
			printf("50, ");
		}
		else if (cnt >= 20)
		{
			cnt -= 20;
			x++;
			printf("20, ");
		}
		else if (cnt >= 10)
		{
			cnt -= 10;
			x ++;
			printf("10, ");
		}
		else if (cnt >= 5)
		{
			cnt -= 5;
			x ++;
			printf("5, ");
		}
		else if (cnt >= 2)
		{
			cnt -= 2;
			x++;
			printf("2, ");
		}
		else
		{
			cnt--;
			x++;
			printf("1, ");
		}
	}
	
	printf("\nThe total number of individual cash is %d.", x);
	//getch();
	
	return 0;
}

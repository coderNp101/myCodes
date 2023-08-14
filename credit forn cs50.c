// 05 / 07 / 2020
// I have incluse header files cs50.h to get input from user & math.h to get the 10 to the power ...
#include <stdio.h>
#include <math.h>

int checksum(unsigned long long int num); // we also have to include this

int main(void)
{
	char ch;
	do
	{
	
    unsigned long long int n;
	
	printf("Number: ");
	scanf("%llu", &n);

    int result = checksum(n);
    if (result == 1) // I can't compare string variable with a string data type so I prefere using integer data type
    {
        if (trunc(n / pow(10, 13)) == 34 || trunc(n / pow(10, 13)) == 37) // not round but trunc to exclude floating points
        {
            printf("AMEX\n");
        }
        else if (trunc(n / pow(10, 14)) >= 51 && trunc(n / pow(10, 14)) <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if (trunc(n / pow(10, 12)) == 4 || trunc(n / pow(10, 15)) == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }


	printf("Do Again, (Y/N)?");
	scanf("%s", &ch);
	}
	while(ch == 'Y');
	
	return 0;
	
}

// I have made a function whic makes easier to handle large statements
int checksum(unsigned long long int num) //  we have to return st when we declare other than void
{
    int check = 0, s1 = 0, s2 = 0, ans;

    while (num != 0)
    {
        int d = num % 10;
        check++;
        if (check % 2 == 1)
        {
            s1 += d;
        }
        else
        {
            d = 2 * d;
            while (d != 0)
            {
                int r = d % 10;
                s2 += r;
                d /= 10;
            }
        }
        num /= 10;  // I forget to put this statement here, which make the loop goes forever :[
    }
    int sum = s1 + s2;
    if (sum % 10 == 0)
    {
        ans = 1;
    }
    else
    {
        ans = 0;
    }
    return ans;
}

#include <stdio.h>
#include <math.h>

int main()
{
	unsigned long long int natural = 1234567890123456;
	int a = 40, xbase, ypow, p;
	float x = 5.87, z = 1.68;
	
	double pi = 3.141592653589792;
	char n[4] = "Sumi", atndnc = 'Y';
	
	printf("Name = %s \nRoll.No.: %d \nHeight = %f\nRandom No. = %f\nStatus = %c\n", n, a, z, x * pi, atndnc);
	printf("The no. is: %llu \n\n\n", natural);
	
	printf("Enter base and index: ");
	scanf("%d%d", &xbase, &ypow);
	
	p = pow(xbase,ypow);
	printf("%d to the power %d is %d", xbase, ypow, p);
	
	return 0;
}


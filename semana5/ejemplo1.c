#include<stdio.h>

int main()
{
	float temp_C,temp_K;
	float tempC=100,final=200,delta;
	int n=10,i;

	delta=(final-tempC)/n;
	for(i=0;i<n;i++){
		temp_K=temp_C+273.15;
		printf("%f %f\n",temp_C,temp_K);
		temp_C=temp_C+delta;
	}

	return 0;
}

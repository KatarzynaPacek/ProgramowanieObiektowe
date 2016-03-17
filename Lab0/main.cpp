#include <stdio.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

int Fib(int n)
{
	double phi=(1+sqrt(5))/2;
	double phi_=(1-sqrt(5))/2;
	return (pow(phi,n)-pow(phi_,n))/sqrt(5);
}

int Arytm(int n)
{
	int a0=1;
	int r=1;
	return a0+n*r;
}

int main(int argc, char **argv)
{
	if(argc!=3)
	{
		printf("Zla liczba argumentow programu\n");
		return 1;
	}
	int number=atoi(argv[1]);
	char mark=argv[2][0];
	if(mark!='f'&&mark!='a')
	{
		printf("Nieznany symbol ciagu. Podaj f lub a\n");
		return 1;
	}
	if(number<0)
	{
		printf("Podano bledny indeks ciagu\n");
		return 1;
	}
	if(mark=='f') printf("Fib(%d) = %d",number,Fib(number));
	else if(mark=='a') printf("Arytm(%d) = %d \n",number,Arytm(number));
	return 0;
	//printf("Hello, World!\n");
}
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
	int liczba=atoi(argv[1]);
	char znak=argv[2][0];
	if(znak!='f'&&znak!='a')
	{
		printf("Nieznan symbol ciagu. Podaj f lub a\n");
		return 1;
	}
	if(liczba<0)
	{
		printf("Podano bledny indeks ciagu\n");
		return 1;
	}
	if(znak=='f') printf("Fib(%d) = %d",liczba,Fib(liczba));
	else if(znak=='a') printf("Arytm(%d) = %d",liczba,Arytm(liczba));
	return 0;
	//printf("Hello, World!\n");
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
int n, l;
srand (time(0));
n = rand();

printf("The Last digit of %d is %d and is greater than 5",n,l);
l = n % 10;

if (l > 5) {
	printf ("and is greater than 5\n");
} else if (lastDigit == 0) {


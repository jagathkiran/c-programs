#include<stdio.h>
int main() {
	int d=2;
	printf("Welcome to a program with a segmentation fault\n");
	scanf("%d", d);
	printf("You gave me %d",d);
	return 0;
}

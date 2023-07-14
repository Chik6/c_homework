#include <stdio.h>

int main ()
{
	int a = 0;
	int b = 0;

	printf("Enter 2 numbers\n");
	scanf("%d %d", &a, &b);

	if (a > b){
		printf("%d is larger\n", a);
	}else if(a < b){
		printf("%d is larger\n", b);
	}else if(a == b){
		printf("Numbers are equal\n");
	}else{
		printf("Error\n");
	}
}

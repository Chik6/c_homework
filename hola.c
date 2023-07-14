#include <stdio.h>

int main() {

  int a, b, c;

  printf("Enter three different numbers:\n");
  scanf("%d %d %d", &a, &b, &c);

  if (a == b && a > c){
   		 printf("%d is the largest number.", a);
	}else if (b == a && a < c){
   		 printf("%d is the largest number.", c);
	}else if (a == c && a < b){
   		 printf("%d is the largest number.", b);
	}else if(a == c && a > b){
                 printf("%d is the largest number.", a);
	}else if(b == c && b > a){
                 printf("%d is the largest number.", b);
	}else if(a == c && a > b){
                 printf("%d is the largest number.", a);
	}else if(a > c && a > b){
                 printf("%d is the largest number.", a);
	}else if(b > a && c < b){
                 printf("%d is the largest number.", b);
	}else if(c > a && c > b){
                 printf("%d is the largest number.", c);
	}
}

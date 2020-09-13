#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 0, b = 0;
	printf("Enter two numbers: ");
	scanf("%d %d", &a,&b);
	if(a+b > 0){
		if ((a + b) % 2 == 1) printf("Positive Odd\n");
		else if ((a + b) % 2 == 0) printf("Positive Even\n");
	}
	else if (a + b == 0) {
		printf("Zero\n");
	}
	else {
		if (((a + b) * -1) % 2 == 1) printf("Negative Odd\n");
		else if (((a + b) * -1) % 2 == 0) printf("Negative Even\n");
	}
	return 0;
}
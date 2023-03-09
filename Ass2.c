#include <stdio.h>
int main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	if(n>0){
		printf("Entered No is positive");
	}
	else if(n==0){
		printf("Entered No is 0");
	}
	else {
		printf("Entered No is negative");
	}
	return 0;
}

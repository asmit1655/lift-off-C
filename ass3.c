#include <stdio.h>
int main(){
	int n,i=0,r;
	printf("Enter number:");
	scanf("%d",&n);
	do{
		r=n%10;
		n=n/10;
		i=i+r;
	}
	while (n!=0);
	printf ("Sum of entered no is %d",i);
	return 0;
}

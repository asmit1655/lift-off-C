#include <stdio.h>
int main(){
	float r,d,cir,ar;
	printf("Enter radius:");
	scanf("%f",&r);
	printf("\n");
	printf("Diameter:%f",r/2);
	printf("\n");
	printf("Circumference of circle with radius %f is %f",r,(2*3.14*r));
	printf("\n");
	printf("Area of circle with radius %f is %f",r,(3.14*r*r));
	return 0;
}

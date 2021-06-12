#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	int hcf,lcm;
	int i;
	for(i=1;i<=a||i<=b;i++){
		if((a%i==0) && (b%i==0)){
			hcf=i;
		}
	}
	lcm=(a*b)/hcf;//because we know that lcm*hcf=product of two numbers
	printf("HCF and LCM of two numbers %d and %d HCF=%d,LCM=%d",a,b,hcf,lcm);
	return 0;
}

#include<stdio.h>

int count=1;

void main(){
long int num;
scanf("%ld", &num);

while(num/2!=0){

	if(num%2==1){
	count++;}
	num= num/2;
}
	printf("\n %d",(count));
}

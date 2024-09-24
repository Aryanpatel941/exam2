#include<stdio.h>
main(){
	//que 1
/*	char ch='a';
	do{
		printf("%c ",ch);
		ch=ch+4;
	}
	while(ch<='z');*/
	
	//que 2
  /*  int num,count;
    printf("enter any numbers :");
    scanf("%d",&num);
    while(num>0){
    	num=num/10;
    	count++;
    	
	}
	printf("num of digit = %d" ,count);*/
	
	//que 3
	int num,fdigit,ldigit;
	int sum=0;
	printf(" enter any numbers :");
	scanf("%d",&num);
	ldigit=num%10;
	sum=sum+ldigit;
	
    while(num>=9){
    	num=num/10;
	}
	fdigit=num;
	sum=sum+fdigit;
	printf("%d",sum);
	
    
	
	
}

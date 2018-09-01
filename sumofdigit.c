#include<stdio.h>
#include<conio.h>
int sum(int num);
int num,s,n,p,x;
void main(){
	printf("enter number");
	scanf("%d",&n);
	s=sum(n);
	printf("%d",s);
	getch();
}
int sum(int num){
	if(num==0){
		return 0;
	}
		else{


	return num%10 +sum(num/10);


}
}

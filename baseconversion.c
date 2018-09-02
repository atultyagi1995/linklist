#include<stdio.h>
#include<conio.h>
int base(int num);
int num,s;
int main(){
 int num ;
  printf("enter number");
  scanf("%d",&num);
    printf("%d", base(num));
    return 0;
}
int base(int num){
//int num;
if (num == 0) 
        return 0; 
    else
        return (num % 2 + 10 * base(num / 2));
              
} 

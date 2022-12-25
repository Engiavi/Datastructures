#include<stdio.h>
int revrsNum(int num1, int num2){
   if (num1 == 0){
      return num2;
   }
   num2 *= 10;
   num2 += (num1 % 10);
   num1 = num1/10;
   return revrsNum(num1, num2);
}
int main(){
   int Num;
   printf("enter no:-\n");
   scanf("%d",&Num);
   int Num2 = revrsNum(Num,0);
   if (Num == Num2){
      printf("%d is Palindrome!",Num);
   }
   else{
      printf("%d is not a Palindrome!",Num);
   }
   return 0;
}
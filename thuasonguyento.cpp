#include <stdio.h>
#include <math.h>

void thuaSoNT(int n){
   for(int i=2;i<=sqrt(n)/2;i++){
       while(n%i==0){
       printf("%d",i);
       n/=i;
       }
   }

}

int main(){
   int n;
   printf("Nhap N :");
   scanf("%d",&n);
   thuaSoNT(n);
   printf("\n");

}
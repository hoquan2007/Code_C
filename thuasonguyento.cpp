#include <stdio.h>
#include <math.h>

void thuaSoNT(int n){
   for(int i=2;i<=sqrt(n);i++){
       while(n%i==0){
       printf("%d",i);
       n/=i;
       }
      
   }
 if(n!=1)  printf("%d",n);
}
   
int main(){
   int n;
   printf("Nhap N :");
   scanf("%d",&n);
   thuaSoNT(n);
   printf("\n");

}
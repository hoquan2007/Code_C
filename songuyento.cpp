#include <stdio.h>
#include <math.h>
int SoNT(int n){
   for (int i=2 ;i<=sqrt(n);i++){
    if (n%i==0)  return 0;
   } return n>1;
   
}

int main(){
  int n; 
  printf("Nhap so nguyen N: ");
  scanf("%d",&n);
  SoNT(n);
  if (SoNT(n)) printf("%d la so nguyen to\n",n);
  else printf("%d khong phai la so nguyen to\n",n);
  return 0; 

}

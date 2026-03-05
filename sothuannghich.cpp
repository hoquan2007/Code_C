#include<stdio.h>
#include<math.h>

void checkSoThuanNgich(long long n){
   long long  doi_n =0 , m=n;
    while (n!=0){
        doi_n=doi_n*10 + n%10;
        n/=10;
    }
    if (doi_n == m)  printf("%lld la so thuan nghich ",m);
    else printf("%lld khong phai la so thuan nghich ", m);
}

int main (){
   long long n;
   printf("Nhap n can check : ");
   scanf("%lld",&n);
   checkSoThuanNgich(n);
   printf("\n");
    return 0;
}
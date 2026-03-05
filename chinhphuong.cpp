#include<stdio.h>
#include<math.h>
int chinhphuong(int n){
    int can=sqrt(n);
    if (can * can == n) return 1;
    else return 0;
}
int main(){
  int t ;
  printf("Nhap so luong testkey : ");
  scanf("%d",&t);
  while(t--){
    int a, b; 
    printf("\nNhap doan [a,b] can check :");
    scanf("%d%d",&a,&b);
    int c1=sqrt(a),c2=sqrt(b);
    if(c1*c1!=a)
    ++c1;
    for (int i=c1;i<=c2;i++){
        
        printf("%d  ",i*i);
        
    }

  }
  printf("\n");

}
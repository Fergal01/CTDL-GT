
#include<conio.h>
#include<stdio.h>
int Giaithua(int n){
	if(n==0){
		return 1;
	}
	else{
	return n*Giaithua(n-1);
	}
	
}
int main(){
	int n, nGiaithua;
	printf("Nhap n = ",n);
	scanf("%d",&n);
	nGiaithua = Giaithua(n);
	printf("%d",nGiaithua);
	return 0;
}

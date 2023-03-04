 #include<stdio.h>
 #include<conio.h>
int songuyen(int n){
 	if (n%2==1){
 		return 0;
	 }
	 else{
	 	return n+n;
	 }
 	
 }
 int main(){
	int n,tongsoduong;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	tongsoduong=songuyen(n);
	printf("%d",tongsoduong);
	return 0;
}		

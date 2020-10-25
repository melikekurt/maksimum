/*Bu program girilen uc sayi icerisinden max olani kullanýcýya soyler */





#include<stdio.h>
int main (){
	int n1,n2,n3;
	int max ; 
	printf("Lutfen ilk sayiyi giriniz.\n");
	scanf("%d",&n1);
	printf("Lutfen ikinci sayiyi giriniz.\n");
	scanf("%d",&n2);
	printf("Lutfen ucuncu sayiyi giriniz.\n");
	scanf("%d",&n3);
	// atadýktan sonra artýk if-else statements yazabilriz
	if(n1>=n2){
		max=n1;
	}
	else{
		max=n2;
	}
	if(max<n3){
		max=n3;
	}
	// output 
	printf("Girdiginiz sayilar: %d,%d ve %d.\n"
					"Bu sayilarin maksimumu %d dir.", n1,n2,n3,max);
	
	
	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}

#include<stdio.h>

int main(){
	int a[5]={44,33,55,22,11};
	int i,min,j;
	for(i=0;i<4;i++){
		min=i;
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				min=j;
			}
		}
	
			int b;
		b=a[min];
		a[min]=a[i];
		a[i]=b;
			
		}
	
	for(i=0;i<5;i++){
		printf("\n  %d",a[i]);
}
	return 0;
}

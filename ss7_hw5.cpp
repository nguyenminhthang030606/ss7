#include <stdio.h>
int main(){
	int n[5],max,min; 
	printf ("nhap vao cac phan tu :\n"); 
		scanf ("%d",&n); 
	for (int i=1;i<5;i++){
		scanf ("%d",&n[i]);		 
	} 
	max=min=n[0]; 
	for (int i=1;i<5;i++){
		if (n[i]>max)max=n[i];	
		if (n[i]<min)min=n[i]; 
    }
    printf ("so lon nhat:%d", max);
	printf ("so nho nhat:%d",min); 
	return 0;	 
		 
}  

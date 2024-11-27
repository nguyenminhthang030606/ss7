#include <stdio.h>

int main (){
	int num[5];
	printf ("nhap cac phan tu mang:\n"); 
	for (int i=0;i<5;i++){
		    scanf ("%d",&num[i]);
    }
	printf ("cac phan tu trong mang la");
	 for(int i=0;i<5;i++){
	 	printf ("%d\n",num[i]); 
	 }	    
	return 0; 
} 

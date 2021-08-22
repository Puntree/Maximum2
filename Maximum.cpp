#include<stdio.h>
main(){
	int i,max=0,a[100];

	for(i=0;i<3;i++){
		printf("Enter number : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("Maximum is %d",max);
}

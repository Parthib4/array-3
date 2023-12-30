#include <stdio.h>
int main(){
	for(int i=0; i<3; i++)
	{
		for(int j=0;j<3;j++){
			int a[i][j];
			printf("the one number\n");
		scanf("%d",&a[i][j]);	
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			int a[i][j];
			printf("%d\n",a[i][j]);
		}
	}
	return 0;
}

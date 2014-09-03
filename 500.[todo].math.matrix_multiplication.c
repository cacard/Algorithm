//
//	矩阵乘法
//
//	MxN * NxP = MxP
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void test_matrix_multiply()
{
	int m=3;
	int n=3;
	int n2=3;
	int p=4;

	int x[3][3]={0};
	int y[3][4]={0};

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			x[i][j]=i+j;
		}

	}
}

void print_martix(int p[][],int m,int n)
{
	if(p==NULL){
		printf("p==NULL\r\n");return;
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",p[m][n]);
			if(j==n-1){
				printf("\r\n");
			}
		}
	}
}

int main(int argc,char* argv[])
{

	return 0;
}

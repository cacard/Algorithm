//
// 	bubble sort
//

#include <stdio.h>
#include <stdlib.h>

void swap(int* x,int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubble_sort(int ary[],const int len)
{
	int i=0;
	int j=0;
	for(;i<len;i++){
		for(j=0;j+1<len-i;j++){
			if(ary[j]>ary[j+1]){
				swap(&ary[j],&ary[j+1]);
			}
		}
	}
}

void print(const int ary[],const int len)
{
	printf("len:%d\r\n",len);
	int i=0;
	for(;i<len;i++){
		printf("->%d\r\n",ary[i]);
	}
}

int main(int argc,char* argv[])
{
	const int len=10;
	int ary[10]={0,4,6,2,3,1,5,7,9,8};
	print(ary,len);
	bubble_sort(ary,len);
	print(ary,len);

	return 0;
}

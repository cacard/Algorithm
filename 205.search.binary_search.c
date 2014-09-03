//
//	binary search
//
//	- 要达到纸上手写无误
//	- 注意边界检查
//	- 注意middle计算
// 

#include <stdio.h>
#include <unistd.h>

int binary_search(int* a,int len,int x,int l,int h)
{
	// low,high边界检查
	if(l>h){
		return -1;
	}

	// low,high相等检查
	if(l==h){
		if(a[l]==x){
			return l;
		}else{
			return -1;
		}
	}

	// 计算middle并判断元素是否为所找
	int middle = (l+h)/2; // 注意middle的计算，也可l+h/2
	if(a[middle]==x){
		return middle;
	}else if(a[middle]>x){
		// 左半边查找
		int l_find=binary_search(a,len,x,l,middle-1);//省去了middle
		if(l_find!=-1){ // 判断查找结果看有没有必要进行右半边查找
			return l_find;
		}
	}else{
		// 右半边查找
		int r_find=binary_search(a,len,x,middle+1,h);
		if(r_find!=-1){
			return r_find;
		}
	}

	// 来个哨兵
	return -1;
}

void print(int* a,int len)
{
	int i=0;
	for(;i<len;i++){
		printf("%d,",a[i]);
	}
	printf("\n");
}

int main(int argc,char* argv[])
{
	int len=15;
	int a[15]={1,4,5,7,8,9,12,45,47,56,67,88,90,93,99};

	print(a,len);

	// test
	int test[9]={1,2,12,13,67,99,93,91,0};
	int i=0;
	for(;i<9;i++){
		int find=binary_search(a,len,test[i],0,len-1);
		printf("finding %d,finded=%d\n",test[i],find);
	}

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 50

int merge(int *,int , int , int,int* );
int partition(int * , int , int ,int*);
int binarysearch(int *,int, int );
void main(){
	int array[]={4,3,2,1};
	int n,k,i,count=0;
	n = sizeof(array)/sizeof(array[0]);
	partition(array,0,n-1,&count);
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}//array contains sorted elements 
	// find if there exists elements in array whose sum is k
	printf("\n enter sum required");
	scanf("%d", &k);
	printf("%d",binarysearch(array,n, k));
	
		
}
int binarysearch(int *arr,int n, int k)
{
int start=0 , end=0, mid=0, count=0;
int i;
printf("\n in binarysearch");

for (i = 0; i < n; ++i)
    {
         start = 0;
         end = n-1;      
        while(start <= end)
        {
          mid = start + (end-start)/2;
            if(i == mid)
                break;
            else if((arr[i] + arr[mid]) == k )
            {

		return 1;
            }
            else if(arr[i] + arr[mid] >= k)
            {
                end = mid-1;
            }
            else
                start = mid+1;}
    }
    return 0;
}

 
int partition(int *array,int low, int high,int* count)
{
	int mid; 
	if(low<high){
		mid= (low+high)/2;
		partition(array,low,mid,count);
		partition(array,mid+1,high,count);
		merge(array,low,mid,high,count);
	}	


}

int merge(int *array ,  int low, int mid , int high,int *count){
	int array2[MAX];
	int inv=0;
	int i=low,y=low,k= mid+1;
	while(i<=mid && k<=high ){
                //printf("\n comparing %d - %d",array[i],array[k]);
		if(array[i]<array[k]){
			array2[y++]=array[i++];
		}
		else{
			array2[y++]=array[k++];
			}
	}
	while(i<=mid ){
             array2[y++]=array[i++];
        }
	while(k<=high){
             array2[y++]=array[k++];
        }
	for(k=low;k<=high;k++){
		array[k]=array2[k];
	}
}

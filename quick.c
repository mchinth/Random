#include<stdio.h>
void quicksort (int *, int , int);
int main(){
int arr[]={1,4,5,2,7,3,90,67,23,13,7,56};
int i,len;
len=sizeof(arr)/sizeof(int);
quicksort(arr,0,len-1);
for(i=0;i<len;i++)
{
printf("%d ",arr[i]);
}
}
void quicksort(int * a, int p,int r){
 int i,j, temp;
int pivot=a[r];
i=j=p;
while(i<=j&&j<r){
 if(a[j]<=pivot){
	temp=a[j];
a[j]=a[i];
a[i]=temp;
i++;
j++;
}
else
j++;
}
a[r]=a[i];
a[i]=pivot;
if(i>0 && i<r)
{quicksort(a,p,i-1);
quicksort(a,i+1,r);
}
}

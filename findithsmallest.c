#include<stdio.h>
int quicksort (int *, int , int,int );
int main(){
int arr[]={1,4,5,2,7,3,90,67,23,13,7,56};
int i,len,k, small=0;
printf("Enter ith smallest you want:\n");
scanf("%d", &k);
len=sizeof(arr)/sizeof(int);
small= quicksort(arr,0,len-1,k);
printf("\n small== %d ",small);
}
int quicksort(int * a, int p,int r, int kth){
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
printf("\n%d element is %d",i+1,a[i]);
for(j=0;j<r;j++)
printf("\t %d ",a[j]);

printf("\n %d , %d ", i+1, kth);
if (i+1==kth)
	return pivot;
else if( i<=kth && i>0){
	printf("calling quicksort i<=k");
	quicksort(a,p,i-1,kth);
}
else if(i<=kth &&i<r){
	printf("calling quicksort i>k");
	quicksort(a,i+1,r,kth-i+1);
}
else 
return pivot;
}


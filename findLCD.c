#include<stdio.h>
#include<stdlib.h>
int solution(int A[], int N, int B[], int M){
    int LCS[3000]={};
    int i;

    for(i=0;i<N;i++){
        LCS[A[i]]++;
    }
    for(i=0;i<M;i++){
        LCS[B[i]]++;
    }
    for(i=0;i<3000;i++){
        if(LCS[i]==2)
           return i;
    }
return -1;
}
int main(){
int A[]={1,2,3,4};
int B[]={3,4};
int res= solution(A, 4, B, 2);
printf("%d", res);
return 1;
}

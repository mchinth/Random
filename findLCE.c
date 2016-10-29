#include<stdio.h>
#include<stdlib.h>
int solution(int A[], int N , int B[], int M)
{
        /* basic solution*/
        int i, j;
        int small;
        for(i=0;i<N-1;i++)
        {
                for(j=i+1;j<N;j++)
                {
                        if(A[i]>A[j])
                        {
                                small = A[j];
                                A[j]=A[i];
                                A[i]=small;
                        }

                }
        }
        for(i=0;i<N;i++)
                printf("%d \t ",A[i]);
        for(i=0;i<M-1;i++)
        {
                for(j=i+1;j<M;j++)
                {
                        if(B[i]>B[j])
                        {
                                small = B[j];
                                B[j]=B[i];
                                B[i]=small;
                        }

                }
        }
        printf("\n array B\n");
        for(i=0;i<M;i++)
                printf("%d \t ",B[i]);

        small =-1;

        for(i=0;i<N;i++){
                for(j=0;j<M;j++)
                {
                        if(A[i]==B[j])
                        {
                                return A[i];
                        }
                }
        }
 return -1;

}
int main()
{
        int A[]={1,0};
        int B[]={9,3,0,4,2};
        int res =solution(A, 2, B, 5);
        printf("\n %d", res);

}

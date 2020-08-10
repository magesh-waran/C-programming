/*TO FIND NEXT LARGEST NUMBER WITH SAME DIGITS                                                                                            5 2 9 8 6
step 1:
we want to find the digit LHS>RHS ie 9>2 and take the index of element 2
step 2:
we want to find the digit which is greater than the 2 that is find in the (step1)  and take the index 5 (2) 9 8 (6)
step 3:
swap the digits what we find in step1 and step2
5 (6) 9 8 (2)
step 4:
reverse the digit reversing will be start from step1 that is 2
5 6 [9 8 2]--->reverse
5 6 2 8 9 ans:) 
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000],n,i,j,l,k=0,temp,ind2,left,right,ans=0,poa;
    scanf("%d",&n);
    while(n){
        arr[k++]=n%10;
        n/=10;
    }
    //step 1:
    for(i=0;i<k;i++){
        if(arr[i]>arr[i+1]){
        poa=i+1;
        break;
        }
    }
    //step 2:
    for(i=0;arr[i]<=arr[ind1];i++);
    ind2=i;
    //step 3:swapping
    temp=arr[poa];
    arr[poa]=arr[ind2]
    arr[ind2]=temp;
    //step 4:reversing
    for(left=0,right=poa-1;left<right;left++,right--){
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
    }
    //converting digit to number
    for(i=k-1;i>=0;i--)
    ans=ans*10+arr[i];  
    printf("%d",ans);
}

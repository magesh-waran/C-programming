/*combination to become array elements zero
input:
5
1 -1 5 -5 4
output:
4
explanation:
1 -1 
5 -5
1 -5 4
1 -1 5 -5
*/

#include<stdio.h>

int main() {
    int n,i,j;
    int arr[100];
    int check=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<(1<<n);i++){
        check=0;
        for(j=0;j<n;j++){
            if((i&(1<<j))!=0){
            check+=arr[j];
            }
        }
        if(check==0)
        count++;
    }
    printf("%d",count);
}

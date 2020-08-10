/*minimum operation to get the number by multiply by 2 or add by 1
In this program we are using greedy algorithm
we are performing trace from back method
when n is odd substract by 1
when n is even we divide the number by 2
this process continue untill we get 2
input :7
output: 5
*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==1||n==2){
        printf("%d",n);
        return 0;
    }
    int count=2;
    while(n!=2){
        if(n&1)
        n-=1;
        else
        n/=2;
        count++;
    }
    printf("%d",count);
}

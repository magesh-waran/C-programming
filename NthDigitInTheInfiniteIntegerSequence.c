/*Find the nth digit of the infinite integer sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...
input:
25
output:
7
*/
#include<stdio.h>
#include<string.h>
int main() {
    int n,strt=1,len=1,count=9;
    char a[1000];
    scanf("%d",&n);
    while(len*count<n){
        n=n-len*count;
        len++;
        count=count*10;
        strt=strt*10;
    }
    strt=strt+(n-1)/len;
    sprintf(a,"%d",strt);
    printf("%c",a[(n-1)%len]);
}

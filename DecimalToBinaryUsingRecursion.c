/*decimal to binary using recursion
input:
7
output:
111*/
#include<stdio.h>
int binary(int n){
    if(n){
        binary(n/2);
        printf("%d",n%2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    binary(n);
}

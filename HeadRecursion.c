//head recursion
#include<stdio.h>
void headrecursion(int n){
    if(n>0){
        headrecursion(n-1);
        printf("%d ",n);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    headrecursion(n);
}

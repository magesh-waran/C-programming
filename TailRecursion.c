/*Tail recursion
input:
10
output:
10 9 8 7 6 5 4 3 2 1
*/
#include<stdio.h>
void tailrecursion(int n){
    if(n>0){
        printf("%d ",n);
        tailrecursion(n-1);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    tailrecursion(n);
}

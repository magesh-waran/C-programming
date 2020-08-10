/*head recursion
input:
10
output:
1 2 3 4 5 6 7 8 9 10
*/
#include<stdio.h>
void headrecursion(int n){
    if(n>0){
        headrecursion(n-1);
        printf("%d ",n);
    }
}
int main() {
    int n;
    scanf("%d ",&n);
    headrecursion(n);
}

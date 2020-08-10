/*Spiral pattern
input:
5
output:
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 
*/
#include<stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=-n+1;i<n;i++){
        for(j=-n+1;j<n;j++){
            if(abs(i)>=abs(j))
            printf("%d ",abs(i)+1);
            else
            printf("%d ",abs(j)+1);
        }
        printf("\n");
    }
}

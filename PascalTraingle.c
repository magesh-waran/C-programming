/*pascal triangle formula c=c*(i-j)/j
input:
4
output:
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
*/
#include<stdio.h>
int main() {
    int i,j,n,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=1;
        for(j=1;j<=i;j++){
            printf("%d ",c);
            c=c*(i-j)/j;
        }
        printf("\n");
    }
}

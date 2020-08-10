/*spiral matrix
input:
4 5
1 2 3 8 9
4 8 6 2 7
1 8 9 6 3
7 8 9 1 0
output:
1 2 3 8 9 7 3 0 1 9 8 7 1 4 8 6 2 6 9 8 
*/
#include<stdio.h>

int main() {
    int mat[1000][1000];
    int r,c,top,bottom,right,left;
    int i,j;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&mat[i][j]);
    top=0,bottom=r-1,left=0,right=c-1;
    while(top<=bottom&&left<=right){
            for(i=left;i<=right;i++)
            printf("%d ",mat[top][i]);
            top++;
            for(i=top;i<=bottom;i++)
            printf("%d ",mat[i][right]);
            right--;
            if(top<=bottom){
            for(i=right;i>=left;i--)
            printf("%d ",mat[bottom][i]);
            bottom--;
            }
            if(left<=right){
            for(i=bottom;i>=top;i--)
            printf("%d ",mat[i][left]);
            left++;
            }
    }
    
}

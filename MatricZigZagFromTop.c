/*matric zigzag from top
input:
4 5
7 8 9 1 7
8 9 8 0 8
7 1 4 9 6
9 5 3 5 4
output:
7 
8 8 
7 9 9 
1 8 1 9 
5 4 0 7 
8 9 3 
5 6 
4 
*/
#include<stdio.h>

int main() {
    int mat[1000][1000];
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&mat[i][j]);
    int row=0,col=0,dir=1;
    for(i=0;i<r+c-1;i++){
        if(dir==1){
            while(row>=0&&col<c)
            printf("%d ",mat[row--][col++]);
            dir=-1;
            if(row<0&&col<c)
            row=0;
            if(col>=c){
                col=c-1;
                row+=2;
            }
        }
        else{
            while(row<r&&col>=0)
            printf("%d ",mat[row++][col--]);
            dir=1;
            if(col<0&&row<r)
            col=0;
            if(row>=r){
                row=r-1;
                col+=2;
            }
            
        }
        printf("\n");
    }
    
}

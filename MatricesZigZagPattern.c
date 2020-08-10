/*Matrices zig zag pattern
input:
5
output:
1 10 11 20 21 
2 9 12 19 22 
3 8 13 18 23 
4 7 14 17 24 
5 6 15 16 25 
*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,row,col,val,ch;
    int down,upp;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        ch=-1;
        val=row,down=(n-row)*2+1,upp=(row-1)*2+1;
        for(col=1;col<=n;col++){
            printf("%d ",val);
            if(ch==-1)
            val+=down;
            else
            val+=upp;
            ch*=-1;
        }
        printf("\n");
    }
    
}

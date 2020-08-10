/*
input:
5
output:
1 
2 9 
3 8 10 
4 7 11 14 
5 6 12 13 15 

*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int row,col,n,ch,val;
    int down,up;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        val=row,down=(n-row)*2+1,ch=-1;
        for(col=1;col<=row;col++){
            printf("%d ",val);
            if(ch==-1)
            val+=down;
            else
            val+=(row-col)*2;//(row-1-(col-1))*2
            ch*=-1;
        }
        printf("\n");
    }
}

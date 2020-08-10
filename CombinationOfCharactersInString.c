/*combination of characters in string
input:
abc
output
a
ab
abc
ac
b
bc
c
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char a[100],temp[100],store[100][100];
    scanf("%s",a);
    int i,j,k,len,st=0;
    len=strlen(a);
    for(i=1;i<(1<<len);i++){
        k=0;
        for(j=0;j<len;j++){
            if((i&(1<<j))!=0)
            temp[k++]=a[j];
        }
        temp[k]='\0';
        if(k!=0)
        strcpy(store[st++],temp);
    }
    //sort the alphabets
    for(i=0;i<st;i++){
        for(j=i+1;j<st;j++){
            if(strcmp(store[i],store[j])>0){
                strcpy(temp,store[i]);
                strcpy(store[i],store[j]);
                strcpy(store[j],temp);
            }
        }
        printf("%s\n",store[i]);
    }
    
}

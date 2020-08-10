#include<stdio.h>
#include <stdlib.h>
int main()
{
   char a[1000],b[1000];
   scanf("%s",a);
   scanf("%s",b);
   char s[]="flames";
   int i,j,f,c=0,p,l=0,t;
   for(i=0;i<strlen(a);i++)
   {
       f=0;
       for(j=0;j<strlen(b);j++)
       {
           if(a[i]==b[j])
           {
               b[j]='*';
               f=1;
           }
       }
       if(f!=1)
       c++;
   }
   for(i=0;i<strlen(b);i++)
   {
       if(b[i]!='*')
       c++;
   }
   f=0;
   for(i=0;i<5;i++)
   {
       p=0;
       while(p<c)
       {
           if(s[l]!='*')
           p++;
           t=l;
           if(l==5)
           l=0;
           else
           l++;
       }
       s[t]='*';
   }
   char x;
   for(i=0;i<6;i++)
   {
       if(s[i]!='*')
       {
           x=s[i];
           break;
       }
   }
   switch(x)
   {
       case 'f':
            printf("FRIENDS");
            break;
       case 'l':
            printf("LOVE");
            break;
       case 'a':
            printf("AFFECTION");
            break;
       case 'm':
            printf("MARRIAGE");
            break;
       case 'e':
            printf("ENEMEY");
            break;
       default:
            printf("SISTER");
   }
}

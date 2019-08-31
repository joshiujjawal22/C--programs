
#include <stdio.h>

int main()
{ int n;
scanf("%d",&n);
   int i,j,c,k;
    int a[n+1];
    int main_count=0;
    for(i=1;i<=n;i++)
    {
        a[i]=i;
    }
   for(i=1;i<=n;i++)
   {    c=0;
   if(a[i]>0){
       for(j=1;j<=n;j++)
       {
           if(a[i]%j==0) c++;


       }
       if(c==2) {
           main_count++;
           for(k=1;k<=n;k++)
           {    if(a[k]>0){
               if(a[k]%a[i]==0) a[k]=0;
           }
           }
       }
   }
}
if(main_count%2==0) printf("Bob");
    else return printf("Alice");
}

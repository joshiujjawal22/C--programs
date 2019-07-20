#include <stdio.h>

int main()
{ int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(j>i) printf(" ");
            else printf("%d",j);
        }
        for(int k=2;k<=i;k++)
        printf("%d",k);
        printf("\n");
        
       
        
    }

    return 0;
}

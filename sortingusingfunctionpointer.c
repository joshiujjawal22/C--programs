#include <stdio.h>
int ascending(int,int);
int descending(int ,int);
int sort(int a[10],int(*compare)(int,int))
{
    for(int i=0;i<10;i++) 
    {
        for(int j=0;j<10;j++) 
        {
            if(compare(a[i],a[j])>0)
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=a[i];
            }
        }
    }
}

int main()
{ 
int a[10]={1,2,3,4,5,6,7,5,4,20};
sort(a,ascending);
for(int i=0;i<10;i++)
{
    printf("%d ",a[i]);
}
printf("\n");
sort(a,descending);
    for(int i=0;i<10;i++)
{
    printf("%d ",a[i]);
}
    

    return 0;
}
int ascending(int a, int b)
{
    if(a<b) return -1;
    else if(a==0) return 0;
    else return 1;
}
int descending(int a, int b)
{
    if(a<b) return 1;
    else if(a==0) return 0;
    else return -1;
}




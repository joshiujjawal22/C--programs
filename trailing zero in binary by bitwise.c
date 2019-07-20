#include<stdio.h>
int main()
{ 
  int count=0,i;
  printf("\nEnter an Integer:");
  scanf("%d",&i);
  while(i>0){
     
  
  if(i%2==0)
  {
      count++;
  }
  i/=2;
  }
  if(count==0)
  {
  printf("\nThere are no Trailing Zeros.");
  }
  else
  {
      printf("\nThere are %d Trailing Zeros.",count);
  }
	return 0;
}

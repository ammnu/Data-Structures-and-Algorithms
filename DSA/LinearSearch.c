#include<stdio.h>
void main()
{
   int a[100],n,i,x;
   printf ("Enter how many numbers");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%d",a[i]);
   }
   printf(“Enter the element to be searched”); 
   scanf(“%d”,&x);
   for(i=0;i<n;i++)
   {
      if(a[i]==x)
      {
          printf(“The resultant is found at position %d”,i+1);
          break;
      }   
   }
    if(i==n)
    printf(“The result is not found”);
}

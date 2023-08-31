#include<stdio.h>
Void main()
{ 
  int c[30],i,n,pos,x;
  printf(“How many elements\n”)
  scanf(“%d”,&n)
  printf(“Enter the elements\n”);
  for(i=0;i<n;i++)
  scanf(“%d”,&c[i])
  sort(c,n)
  printf(“\nSorted Elements\n”);
  for(i=0;i<n;i++)
  printf(“%d”,c[i]);
  printf(“Enter the element to be searched\n”);
  scanf(“%d”,&x);
  pos=binarysearch(c,0,n-1,x);
  if(pos>0)
   printf(“\nElement is found at the position %d”,pos+1);
  else
   printf(“Element not found”);
}

int  binarysearch(int A[ ],int l,int r,int x)
{
   int m;
   if(l<=r)
   {
      m=(l+r)/2;
      if(A[m]==x)
        return m;
      if(x<A[m])
        return binarysearch(A,l,m-1,x)
      return binarysearch(A,m+1,r,x)
   }
  return -1;
}
Void sort(int A[ ],int n)
{
   int pass,cmp,temp;
   for(pass=1;pass<n; pass++)
    for(cmp=0;cmp<n-pass;cmp++)
       if(A[cmp] > A[cmp+1])
        {
            temp  = A[cmp];
            A[cmp] = A[cmp+1];
            A[cmp+1] = temp;
        }     
}

     

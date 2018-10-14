#include <stdio.h>

int main()
{
 int a,i,m;
  scanf("%d",&a);
  //printf("%d",a);
  int n[a];
  for(i=0;i<a;i++)
  {
      scanf("%d",&n[i]);
  }
  m=n[0];
for(i=1;i<a;i++)
  {
      if(m<n[i])
      {
          m=n[i];
       
      }
  }
 printf("%d",m);   
}


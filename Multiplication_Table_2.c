#include <stdio.h>
int main() 
{
  int n,i,a,b;
  scanf("%d%d",&n,&a);
  for(i=1;i<=a;i++)
  {
    printf("%d x %d = %d
",n,i,(n*i));
  }
 
}
#include <stdio.h>
int main() 
{
  int n,i,a;
  scanf("%d%d",&n,&a);
  for(i=1;i<=12;i++)
  {
    printf("%d x %d = %d
",n,i,(n*i));
  }
 
}
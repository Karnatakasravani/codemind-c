# include <stdio.h>
# include <stdlib.h>



int main()
{
    int prno,i,n,flg;
	scanf("%d",&prno);
    for(i=1;i<=prno;i++)
        {
            if(i*(i+1)==prno) 
            {
            flg=1;
            break;
            }
        }
  
            if(flg==1)
            {
			printf("YES
");
            }
            else
            {
			printf("NO");
            }
}
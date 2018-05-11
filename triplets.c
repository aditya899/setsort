    #include "stdio.h"
    int main()
    {
        int i,j,k;
        int count=0,n,s;
         int a[10005];
        scanf("%d",&n);
        for(i=0;i<n;i++)
         scanf("%d",&a[i]);
        scanf("%d",&s);
        for(i=0;i<n-2;i++)
        {
          for(j=i+1;j<n-1;j++)
          {
            for(k=j+1;k<n;k++)
            {
              if((a[i]+a[j]+a[k])<s)
               count++;
            }
          }
        }
        printf("\n%d",count);
      
    } 

#include <stdio.h>
int main()
{

    int a[105][105]={0},i,j,m,n,sum=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(i==0||i==m-1||j==0||j==n-1) sum+=a[i][j];
        printf("%d",sum);
        return 0;
}

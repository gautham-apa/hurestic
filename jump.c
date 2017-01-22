#include <stdio.h>

int main()
{
    int a[3][3],x,y,i,j,m[9],n[9],t1,t2,t3,t4,c=0,k=10;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    scanf("%d%d",&x,&y);
        
        while(k!=c)
        {
            m[c]=x;n[c]=y;
            k=c;
            t1=x+1;
            t2=x-1;
            t3=y+1;
            t4=y-1;
            if(t1<3)
            {
                if(a[t1][y]<a[x][y])
                {
                    x=t1;c+=1;
                    continue;
                }
            }
            if(t2>=0)
            {
                if(a[t2][y]<a[x][y])
                {
                    x=t2;c+=1;
                    continue;
                }
            }
            if(t3<3)
            {
                if(a[x][t3]<a[x][y])
                {
                    y=t3;c+=1;
                    continue;
                }
            }
            if(t4>=0)
            {
                if(a[x][t4]<a[x][y])
                {
                    y=t4;c+=1;
                    continue;
                }
            }
        }
        for(i=0;i<=c;i++)
        {
            printf("(%d,%d), ",m[i],n[i]);
        }
}

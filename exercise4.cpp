#include<stdio.h>
#include<algorithm>
using namespace std;
struct node 
{
	  int num,count;
}per[6000];
int cmp(node x,node y)
{
	    if(x.count!=y.count) return x.count>y.count;
	    if(x.num!=y.num) return x.num<y.num; //如果成绩相同，按由小到大的顺序输出 
}
int main()
{
	    int i,flag,n,m,sum;
	    scanf("%d %d",&n,&m);
		for(i=0;i<n;i++)
		scanf("%d%d",&per[i].num,&per[i].count);
		sort(per,per+n,cmp);
		flag=per[(int)((double)m*1.5)-1].count;
		sum=0;
		for(i=0;i<n;i++)
		{
		if(per[i].count>=flag)
		sum++;
		}
		printf("%d %d\n",flag,sum);
		for(i=0;i<n;i++)
{
		if(per[i].count>=flag)
		printf("%d %d\n",per[i].num,per[i].count);
}
	return 0;
}


/*Ques. 9. Design a scheduler that uses a preemptive priority scheduling algorithm based on
dynamically changing priority. Larger number for priority indicates higher priority.
Assume that the following processes with arrival time and service time wants to execute (for
reference):
ProcessID Arrival Time Service Time
P1 0 4
P2 1 1
P3 2 2
P4 3 1
When the process starts execution (i.e. CPU assigned), priority for that process changes at the
rate of m=1.When the process waits for CPU in the ready queue (but not yet started execution),
its priority changes at a rate n=2. All the processes are initially assigned priority value of 0 when
they enter ready queue for the first time . The time slice for each process is q = 1. When two
processes want to join ready queue simultaneously, the process which has not executed recently
is given priority. Calculate the average waiting time for each process. The program must be
generic i.e. number of processes, their burst time and arrival time must be entered by user.*/
#include<stdio.h> 
 int pri[1000],flag[1000];
 int maxpri(int arr[],int n)
{int max = -1,pos=-1;
   int i,m; 
   //printf("\n");
    for (i = 0; i < n; i++) 
        {
  //    printf("%d ",arr[i]);  	
	  	if(flag[i]==3)
        	continue;
        	else if(flag[i]==2 || flag[i]==1)
        	{
      	if (arr[i] > max)
		  { 
            max = arr[i]; 
            pos=i;
        }
}} 
    return pos;
} 
int main() 
{ 	  int tburst=0;static int ind=0;
      int timeq=1,i,n;
	  float average_wait_time, average_turnaround_time;
      
	  printf("\nEnter Total Number of Processes:"); 
	  scanf("%d", &n); 
      int burst[n],arrival[n],tem[n],pra[n],wt[n],ta[n],burstans[n];
	        for(i = 0; i < n; i++) 
      {
	        printf("\nEnter total Details of Process[%d]\n", i);
            printf("Arrival Time:\t");
            scanf("%d", &arrival[i]);
            printf("Burst Time:\t");
            scanf("%d", &burst[i]); 
            burstans[i]=burst[i];
      }
    
	   
      printf("\nProcess ID\tBurst Time\t Turnaround Time\t Waiting Time\t Priority\n");
	for(i=0;i<n;i++)
	{
		tburst+=burst[i];
	}
	int ans[tburst];
	i=0;
	while(i<tburst)
	{ int x;
		for( x=0;x<n;x++)
		{
		
		if(arrival[x]==i)
		{ 
			flag[x]=2;
			pri[x]=0;
		}	
}
			int pr=	maxpri(pri,n);
		
			ans[ind]=pr;
			//printf("%d at ind:%d",ans[ind],ind);
			ind++;
			burst[pr]--;
		//	printf("\nburst of %d is %d at i %d",pr,burst[pr],i);
			if(burst[pr]==0)
			{
		//	printf("\n%d burst time is 0",pr);
			flag[pr]=3;
			ta[pr]=i-arrival[pr];
			wt[pr]=ta[pr]-burstans[pr];
			if(wt[pr]<0)
			wt[pr]=0;
			pra[pr]=pri[pr];
			}
			else
			flag[pr]=1;
			int m;
			for(m=0;m<n;m++)
			{
				if(flag[m]==1)
				pri[m]++;
				else if(flag[m]==2)
				pri[m]+=2;
			}
				pri[pr]--;
		
			for(m=0;m<tburst;m++)
			{
			//printf("%d ",ans[m]);
	//	printf("\n pro:%d pri:%d flag %d\n",m,pri[m],flag[m]);
		}i++;
		}		
	/*		for(i=0;i<ind;i++)
		{
			printf("%d ",ans[i]);
		}*/
		int m;
		for(m=0;m<n;m++)
		{
			printf("\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",m,burstans[m],ta[m],wt[m],pra[m]);
		}
}

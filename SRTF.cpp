#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter the no of process: ";
    cin>>n;
    int p[n],at[n],bt[n],ct[n],tat[n],wt[n],rt[n],resp[n];
    float totalTat=0,totalWt=0;
    
    for(i=0;i<n;i++)
    {
        cout<<"enter the arrival time of process p"<<i+1<<":";
        cin>>at[i];
        cout<<"enter the burst time of process p"<<i+1<<":";
        cin>>bt[i];
        rt[i]=bt[i];
        p[i]=i+1;
        resp[i]=-1;
    }
   
   int complete=0,currentTime=0;
   while(complete<n)
   {
       j=-1;
       int minrt=INT_MAX;
         for(i=0;i<n;i++)
         {
             if(at[i]<=currentTime&&rt[i]>0&&rt[i]<minrt)
             {
                 minrt=rt[i];
                 j=i;
             }
         }
        if(j!=-1)
        {
            if(resp[j]==-1)
            {
                resp[j]=currentTime-at[j];
            }
           rt[j]--;
           currentTime++;
           if(rt[j]==0)
           {
               ct[j]=currentTime;
               tat[j]=ct[j]-at[j];
               wt[j]=tat[j]-bt[j];
               totalTat+=tat[j];
               totalWt+=wt[j];
               complete++;
           }
            
        }
        else{
            currentTime++;
        }
   }
   
    
   
    cout<<"\n\tP\tAT\tBT\tCT\tTAT\tWT\tRT\t"<<endl;
       for(i=0;i<n;i++)
       {
           cout<<"\tP"<<p[i]<<"\t"<<at[i]<<"\t"<<bt[i]<<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<"\t"<<resp[i]<<"\t"<<endl;
       }
       cout<<endl;
       cout<<"average turnaround time: "<<totalTat/n<<endl;
       cout<<"average waiting time: "<<totalWt/n<<endl;
return 0;
}
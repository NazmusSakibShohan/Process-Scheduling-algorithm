#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter the no of process: ";
    cin>>n;
    int p[n],at[n],bt[n],ct[n],tat[n],wt[n],rt[n];
    float totalTat=0,totalWt=0;
    
    for(i=0;i<n;i++)
    {
        cout<<"enter the arrival time of process p"<<i+1<<":";
        cin>>at[i];
        cout<<"enter the burst time of process p"<<i+1<<":";
        cin>>bt[i];
        p[i]=i+1;
    }
   
   int currentTime=0,complete=0;
   while(complete<n)
   { 
       j=-1;
       int minbt=INT_MAX;
       
       for(i=0;i<n;i++)
       {
           if(at[i]<=currentTime&&bt[i]>0&&bt[i]<minbt)
           {
               minbt=bt[i];
               j=i;
           }
       }
       
       if(j!=-1)
       {
           currentTime+=bt[j];
           ct[j]=currentTime;
           tat[j]=ct[j]-at[j];
           wt[j]=tat[j]-bt[j];
           rt[j]=wt[j];
           totalTat+=tat[j];
           totalWt+=wt[j];
           
           bt[j]=0;
           complete++;
       }
       else{
           currentTime++;
       }
       
   }
    
    
   
    cout<<"\n\tP\tAT\tBT\tCT\tTAT\tWT\tRT\t"<<endl;
       for(i=0;i<n;i++)
       {
           cout<<"\tP"<<p[i]<<"\t"<<at[i]<<"\t"<<tat[i]-wt[i]<<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<"\t"<<rt[i]<<"\t"<<endl;
       }
       cout<<endl;
       cout<<"average turnaround time: "<<totalTat/n<<endl;
       cout<<"average waiting time: "<<totalWt/n<<endl;
return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
         int i,j,n;
         cout<<"Enter the total number of Process: ";
         cin>>n;
         int p[n],at[n],bt[n],ct[n],tat[n],wt[n];
         float totalTat=0,totalWt=0;
         
         for(i=0;i<n;i++)
         {
             cout<<"Enter the Arrival time of P"<<i+1<<":";
             cin>>at[i];
             cout<<"Enter the Brust time of P"<<i+1<<":";
             cin>>bt[i];
             p[i]=i+1;
         }
        
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(at[j]>at[j+1])
                {
                    int temp=at[j];
                    at[j]=at[j+1];
                    at[j+1]=temp;
                    
                    temp=p[j];
                    p[j]=p[j+1];
                    p[j+1]=temp;
                    
                    temp=bt[j];
                    bt[j]=bt[j+1];
                    bt[j+1]=temp;
                    
                     
                }
            }

        }
        
        
        int CurrentTime=0;
        for(i=0;i<n;i++)
        {  
            if(CurrentTime<at[i])
            {
                CurrentTime=at[i];
            }
            ct[i]=CurrentTime+bt[i];
            
            tat[i]=ct[i]-at[i];
            wt[i]=tat[i]-bt[i];
            CurrentTime=ct[i];
            
            totalTat+=tat[i];
            totalWt+=wt[i];
        }
        
       cout<<"\n\tP\tAT\tBT\tCT\tTAT\tWT\t"<<endl;    
       for(i=0;i<n;i++)
        {
            cout<<"\t"<<"P"<<p[i]<<"\t"<<at[i]<<"\t"<<bt[i]<<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<"\t"<<endl;
        } 
      cout<<endl;        
      cout<<"Average Turnaround time: "<<totalTat/n<<endl;   
      cout<<"Average Waiting time: "<<totalWt/n<<endl;   

    return 0;
}
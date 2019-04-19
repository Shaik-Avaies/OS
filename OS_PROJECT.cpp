#include<stdio.h>

int main(){
	
    int i, total_process, total=0, time_quantum=3;
    float average_wt=0,average_total_tat=0;
    
    printf("\n\n\t==========================================================\n");
    printf("\t==========================================================\n");
    printf("\t==========================================================\n\n");
    printf("\tEnter number of process: ");
    scanf("%d",&total_process);
    printf("\n");
    
    int bt[total_process],process_number[total_process];
	int wt[total_process],tat[total_process],at[total_process];
	int start_time[total_process],finish_time[total_process],past_time_quantum;
	int total_tat=0;
	int total_wt=0,response_time[total_process],order_of_exceution[total_process];
	int temp_process_number[total_process],total_temp_process_number,bt_second[total_process];
	
    for(i=0;i<total_process;i++)
    {
        printf("\n\tEnter Arrival Time of process no p%d\t:",i+1);
        scanf("%d",&at[i]);
        printf("\n\tEnter Burst Time of process no p%d\t:",i+1);
        scanf("%d",&bt[i]);
        bt_second[i]=bt[i];
        total+=bt[i];                                       
        process_number[i]=i+1;
    }
    
    int least_bt=0,least_bt_process,total_process_executed=0;
    printf("\n\n");
    
    for(int i=0;i<total_process;i++)                               
    
        start_time[i]=-1;
    
    printf("\t***************** EXCEUTION ORDER FOR SHORT JOB FIRST IS -: **************\n\n");
    while (total_process_executed+1<=total_process)                                       
    {
        past_time_quantum=time_quantum;
        total_temp_process_number=0;
        for (int i=0;i<total_process;i++){                          
            if (at[i]<=time_quantum && at[i]>=0){
                temp_process_number[total_temp_process_number]=i;
                total_temp_process_number++;
                if (total_temp_process_number==1){
                    least_bt=bt[i];
                    least_bt_process=i;
                }
                else{
                    if(least_bt>bt[i]){
                        least_bt=bt[i];
                        least_bt_process=i;
                    }
                }
            }
        }
        
        
        if (total_temp_process_number!=0){
            if (start_time[least_bt_process]==-1)
            start_time[least_bt_process]=time_quantum;
            if (least_bt>10){
                bt[least_bt_process]-=10;
                time_quantum+=10;
               
            }else{
                time_quantum+=bt[least_bt_process];
                finish_time[least_bt_process]=time_quantum;
                tat[least_bt_process]=finish_time[least_bt_process]-at[least_bt_process];
                wt[least_bt_process]=tat[least_bt_process]-bt_second[least_bt_process];
                response_time[least_bt_process]=start_time[least_bt_process]-at[least_bt_process];
                total_wt+=wt[least_bt_process];
                total_tat+=tat[least_bt_process];
                order_of_exceution[total_process_executed]=least_bt_process+1;
                total_process_executed++;
                at[least_bt_process]=-1;
                printf("\n\tprocess exceuted %d is p%d\n",total_process_executed,least_bt_process+1);
            
            }
            
            
            
        }
        if (time_quantum==past_time_quantum)                            
            time_quantum++;
       
        
    }
    printf("\n\t\ttime_value is %d\n",time_quantum);
    printf("\n\tSystem was idle during exceution for %d\n\n",time_quantum-total);
    
   
    printf("\n  Process\t|  burst_time   \t| waiting_time \t\t\t  | turn_around_time | \t\t Response_Time");
    printf("\n------------------------------------------------------------------------------------------------------------");
    for(i=0;i<total_process;i++)
    {
        printf("\n  p%d\t\t|\t%d\t\t|\t%d\t\t\t|\t%d\t\t\t  |  %d",process_number[i],bt_second[i],wt[i],tat[i],response_time[i]);
    }
    
    printf("\n\n");
    average_wt=total_wt*1.0/total_process;
    average_total_tat=total_tat*1.0/total_process;
    printf("\n\n\tAverage Waiting Time=%f",average_wt);
    printf("\n\tAverage Turnaround Time=%f\n",average_total_tat);
    printf("\n\n");
}


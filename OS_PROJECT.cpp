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
 

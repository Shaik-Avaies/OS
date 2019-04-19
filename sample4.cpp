
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


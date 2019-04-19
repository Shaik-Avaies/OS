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
        


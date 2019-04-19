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



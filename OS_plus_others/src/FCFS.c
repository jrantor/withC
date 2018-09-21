#include<stdio.h>

main ()
{
 int count, i, num_of_pro;
 float wt_time[100],bt_time[100],ta_time[100];
 float average_waiting_time=0.0,average_turnaround_time=0.0;
 printf("Enter the number of Processes: \t");
 scanf("\n %d",&num_of_pro);
 printf("\nBurst Time of the processes: \n\n");

 for(count=0;count<num_of_pro;count++)
 {
   printf("Process %d: ",count+1);
   scanf("%f",&bt_time[count]);

 }
 wt_time[0]=0;
 for(count = 1;count < num_of_pro;count++)
{
    wt_time[count] = 0;
    for(i = 0;i < count;i++)
    {
        wt_time[count] = wt_time[count] + bt_time[i];
    }
}
printf("\nProcesses\t\tBurst Time\tWaiting Time\tTurnaround Time");
for(count = 0;count < num_of_pro;count++)
{
    ta_time[count] = bt_time[count] + wt_time[count];
    average_waiting_time = average_waiting_time + wt_time[count];
    average_turnaround_time = average_turnaround_time + ta_time[count];
    printf("\nProcess %d\t\t%f\t\t%f\t\t%f", count + 1, bt_time[count], wt_time[count], ta_time[count]);
}
printf("\n");
average_waiting_time = average_waiting_time / count;
average_turnaround_time = average_turnaround_time / count;
printf("\nAverage Waiting Time = %f", average_waiting_time);
    printf("\nAverage Turnaround Time = %f", average_turnaround_time);
printf("\n");
}


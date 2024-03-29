#include <stdio.h>
int wt(int proc[], int n,
int bt[], int wait_time[]) {
   wait_time[0] = 0;  
   for (int i = 1; i < n ; i++ )
   wait_time[i] = bt[i-1] + wait_time[i-1] ;
   return 0;
}
int turnaroundtime( int proc[], int n,
int bt[], int wait_time[], int tat[]) {
   int i;
   for ( i = 0; i < n ; i++)
   tat[i] = bt[i] + wait_time[i];
   return 0;
}
int avgtime( int proc[], int n, int bt[]) {
   int wait_time[n], tat[n], total_wt = 0, total_tat = 0;
   int i;  
   wt(proc, n, bt, wait_time);

   turnaroundtime(proc, n, bt, wait_time, tat);
   
   printf("Processes  Burst   Waiting Turn around \n");
   
   for ( i=0; i<n; i++) {
      total_wt = total_wt + wait_time[i];
      total_tat = total_tat + tat[i];
      printf(" %d\t  %d\t\t %d \t%d\n", i+1, bt[i], wait_time[i], tat[i]);
   }
   printf("Average waiting time = %f\n", (float)total_wt / (float)n);
   printf("Average turn around time = %f\n", (float)total_tat / (float)n);
   return 0;
}

int main() {
   
   int proc[] = { 1, 2, 3,4};
   int n = sizeof proc / sizeof proc[0];
   
   int bt[] = {5, 8, 10,12};
   avgtime(proc, n, bt);
   return 0;
}

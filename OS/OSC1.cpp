//Q4.Write a program to implement the FCFS CPU Scheduling Algorithm.
#include <iostream>
using namespace std;
int main() {
 int n;
   cout << "Enter number of processes: ";
    cin >> n;
  int at[10], bt[10], ct[10], tat[10], wt[10];
  for(int i = 0; i < n; i++) {
        cout << "Enter AT and BT for P" << i + 1 << ": ";
        cin >> at[i] >> bt[i];
    }
 int time = 0;
for(int i = 0; i < n; i++) {
   if(time < at[i])
  time = at[i];
time = time + bt[i];
ct[i] = time;
 tat[i] = ct[i] - at[i];
 wt[i] = tat[i] - bt[i];
    }
cout << "\nP\tAT\tBT\tCT\tTAT\tWT\n";
for(int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;
    }

    return 0;
}

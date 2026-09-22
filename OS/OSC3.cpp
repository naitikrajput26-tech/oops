//Q3.Write a program to implement the SRTF CPU Scheduling Algorithm.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    int at[10], bt[10], rt[10];
    int ct[10], tat[10], wt[10];
    for(int i = 0; i < n; i++) {
        cout << "Enter AT and BT for P" << i + 1 << ": ";
        cin >> at[i] >> bt[i];

        rt[i] = bt[i];
    }
    int time = 0;
    int completed = 0;
    while(completed < n) {
        int min = 9999;
        int pos = -1;

        for(int i = 0; i < n; i++) {
            if(at[i] <= time && rt[i] > 0 && rt[i] < min) {
                min = rt[i];
                pos = i;
            }
        }
        if(pos == -1) {
            time++;
            continue;
        }
        rt[pos]--;
        time++;

        if(rt[pos] == 0) {
            completed++;
            ct[pos] = time;
            tat[pos] = ct[pos] - at[pos];
            wt[pos] = tat[pos] - bt[pos];
        }
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
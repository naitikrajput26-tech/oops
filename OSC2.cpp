//Q2.Write a program to implement the SJF CPU Scheduling Algorithm.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    int at[10], bt[10], ct[10], tat[10], wt[10];
    int done[10] = {0};
    for(int i = 0; i < n; i++) {
        cout << "Enter AT and BT for P" << i + 1 << ": ";
        cin >> at[i] >> bt[i];
    }
    int time = 0;
    for(int k = 0; k < n; k++) {
        int min = 9999;
        int pos = -1;
        for(int i = 0; i < n; i++) {
            if(done[i] == 0 && at[i] <= time && bt[i] < min) {
                min = bt[i];
                pos = i;
            }
        }

        if(pos == -1) {
            time++;
            k--;
            continue;
        }

        time = time + bt[pos];

        ct[pos] = time;
        tat[pos] = ct[pos] - at[pos];
        wt[pos] = tat[pos] - bt[pos];

        done[pos] = 1;
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
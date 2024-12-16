import java.util.Scanner;

class FCFS {

    static void wait_tm(int at[], int n, int bt[], int wt[]) {
        wt[0] = 0;
        for (int i = 1; i < n; i++) {
            wt[i] = Math.max(at[i], wt[i - 1] + bt[i - 1]) - at[i];
        }
    }

    static void turnA_time(int at[], int n, int bt[], int wt[], int tat[]) {
        for (int i = 0; i < n; i++) {
            tat[i] = bt[i] + wt[i];
        }
    }

    static void avg_time(int at[], int n, int bt[]) {
        int wt[] = new int[n], tat[] = new int[n];
        int total_wt = 0, total_tat = 0;

        wait_tm(at, n, bt, wt);
        turnA_time(at, n, bt, wt, tat);
        System.out.println("Processes  Arrival T  Burst T  Waiting T  Turn around T");
        System.out.println("-----------------------------------------------------------");

        for (int i = 0; i < n; i++) {
            total_wt = total_wt + wt[i];
            total_tat = total_tat + tat[i];
            System.out.printf("  P%d       %d          %d          %d          %d\n", i + 1, at[i], bt[i], wt[i], tat[i]);
        }
        System.out.println("-----------------------------------------------------------");
        float s = (float) total_wt / (float) n;
        int t = total_tat / n;
        System.out.printf("Average waiting time = %.2f\n", s);
        System.out.printf("Average turn around time = %d\n", t);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of processes: ");
        int n = scanner.nextInt();

        int arrival_time[] = new int[n];
        int burst_time[] = new int[n];

        for (int i = 0; i < n; i++) {
            System.out.print("Enter arrival time for process " + (i + 1) + ": ");
            arrival_time[i] = scanner.nextInt();
        }

        for (int i = 0; i < n; i++) {
            System.out.print("Enter burst time for process " + (i + 1) + ": ");
            burst_time[i] = scanner.nextInt();
        }

        avg_time(arrival_time, n, burst_time);
        scanner.close();
    }
}
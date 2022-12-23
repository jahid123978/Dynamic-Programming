import java.util.Scanner;
class Fibonaccidp{
    //Memoization solution to print fibonacci series
    // public static int fibonacciMemoization(int n, ArrayList<Integer>dp){
    //     if(n<=1)
    //     return n;
    //     if(dp[n] != -1)
    //     return dp[n];
    //     return dp[n] = fibonacciMemoization(n-1, dp) + fibonacciMemoization(n-2, dp);
    // }

    //Tabulation solution to print fibonacci series
    // public static int fibonacciTabulation(int n, ArrayList<Integer>dp){
    //     dp[0] = 0;
    //     dp[1] = 1;
    //     for(int i=2; i<=n; i++){
    //         dp[i] = dp[i-1] + dp[i-2];
    //     }
    //     return dp[n];
    // }
    public static void main(String[] args) {
     Scanner scn = new Scanner(System.in);
     int n = scn.nextInt();
    // ArrayList<Integer>dp = new ArrayList<Integer>();
    // for(int i=0; i<=n+1; i++){
    //     dp.add(-1);
    // }

    int prev2 = 0, prev = 1;
    for(int i=2; i<=n; i++){
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    System.out.println("Fibonacci number: "+ prev);
    //   System.out.println(fibonacciMemoization(n, dp));
    }
}


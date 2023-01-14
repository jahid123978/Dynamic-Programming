import java.util.*;
class ClimbingStairs{
    public static int NumberOfWays(int n){
        if(n == 0)
         return 1;
        if(n == 1)
         return 1;
         return NumberOfWays(n-1)+NumberOfWays(n-2);
    }
    public static void main(String[] args) {
       Scanner scn = new Scanner(System.in);
       int n = scn.nextInt();
       System.out.println("Number of disnict ways: "+ NumberOfWays(n));

    }
}
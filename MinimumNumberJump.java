import java.util.*;
class MinimumNumberJump{
    // public static int minimum(int i, int k, int heights[]){
    //     int minimumNumber = Integer.MAX_VALUE;
    //     int[] dp = new int[n];
    //     dp[0] = 0;
    //     for(int j=1; j<k; j++){
    //         int left = dp[j-1] + Math.abs(heights[j]-heights[i-j])
    //     }
    // }
    // public static int MinimimNumberJumpReachEnd(int n, int k, int heights[]){
    //     int[] dp = new int[n];
    //     dp[0] = 0;
    //     for(int i=1; i<n; i++){

    //     }
    // }
    public static int MinimumNumberCountJump(int n, ArrayList<Integer>heights){
       int count = 0, x = 0;
    //    Collections.sort(heights, Collections.reverseOrder());
    int size = n;
       for(int i=0; i<n; i++){
        if(x<n){
            for(int j=)
            x = heights.get(x);
            size = size - x;
        }
         if(size <= 0){
            count++;
            break;
         }
         else{
            count++;
         }

       }
       return count;
    }
    public static void main(String[] args) {
        Scanner ncn = new Scanner(System.in);
        int a = ncn.nextInt();
        ArrayList<Integer>arr = new ArrayList<>();
        for(int i=0; i<a-1; i++){
            int x = ncn.nextInt();
            arr.add(x);
        }
        System.out.println(MinimumNumberCountJump(a, arr));
    }
}
import java.util.Arrays;

public class LeetCode04 {
    public static void main(String[] args) {

        
    }


    public int[] tudo(){
        int nums[] = {2,3,4,5};
        int target = 7;

        int sum = 0;
        int g[] = {0,0};
        int position = 0;
        
        for(int i = 0; i < nums.length-1; i++){
            sum = nums[i]+ nums[i+1];
            position++;
            if(sum == target){
                g[0] = position-1;
                g[1] = position;
            }
        }

        System.out.println(Arrays.toString(g));
        return g;
    }

}

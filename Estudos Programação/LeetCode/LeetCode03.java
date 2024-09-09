import java.util.HashMap;
import java.util.Map;

public class LeetCode03 {
    public static void main(String[] args) {

        int [] nums = {1,1,1,2,1,2,1,1,2,1,1};
        int numSafe = 0;

        Map <Integer, Integer> map = new HashMap<>();

        //Percorre a lista e pega a quantidade de nums que mais repetem em um caso especifico
        for (int i = 0; i < nums.length-1; i++) {
            if(nums[i] == nums[i+1] ){
                numSafe++;
            }else if(nums[i] != nums[i-1] && nums[i] != nums[i+1]){
                numSafe++;
            }
        }
        map.entrySet();
        System.out.println(numSafe);
    }
}

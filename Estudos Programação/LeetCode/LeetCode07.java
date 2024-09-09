import java.lang.reflect.Array;
import java.util.Arrays;

public class LeetCode07{

        public static void main(String[] args) {
            LeetCode07 solution = new LeetCode07();

            int nums[] = {1,1,2};

            solution.removeDuplicates(nums);

        }

        public int removeDuplicates(int[] nums) {

            int k = 1;

            //Passado [1,1,2] -> [1,2, ]
            for (int i = 1; i < nums.length; i++) {
                if(nums[i] != nums[i-1]){
                    nums[k] = nums[i];
                    k++;
                }else if(nums[nums.length -1]== nums[i-1]){
                    nums[k-1] = nums[i-1];
                }
            }

            System.out.println(Arrays.toString(nums));
            
            return k;
        }
    }

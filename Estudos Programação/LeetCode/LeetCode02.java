
public class LeetCode02 {
    public static void main(String[] args) {
            LeetCode02 solution = new LeetCode02();

            int nums[] = {3,2,2,3};

            System.out.println(solution.removeElement(nums, 2));

     }

    public int removeElement(int[] nums, int val) {

        int j = 0 ;
        //percorre o array e verifica se o num na posição é 
        //Igual o val passado
            for (int i = 0; i < nums.length; i++) {
                if(nums[i] != val){
                    //verifica o novo index
                    nums[j] = nums[i];
                    //Pega o tamanho do novo array
                    j++;
                }
            }

            //Retorna o novo tamanho do array
            return j;
        }
}

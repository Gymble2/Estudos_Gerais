
public class Testes {

    public static void main(String[] args) {
        
    }
    
        
    public int maxArea(int[] height) {
        int totalHeigth = 0;
        int left = 0,right = height.length -1 ;

        while (left<right) {
            int areaPresente = Math.min(height[left], height[right]) * (right - left);
            totalHeigth = Math.max(totalHeigth, areaPresente);

            if(height[left]< height[right]){
                left++;
            }else{
                right--;
            }
        
        }
        return totalHeigth;
    }
}



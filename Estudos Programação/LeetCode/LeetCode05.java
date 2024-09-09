import java.util.Arrays;


public class LeetCode05 {

        public static void main(String[] args) {
            LeetCode05 testes = new LeetCode05();

            int []nums1 = {1,2};
            int []nums2 = {3,4};

            System.out.println(testes.findMedianSortedArrays(nums1,nums2));
        }

        public double findMedianSortedArrays(int[] nums1, int[] nums2) {
            
            int numsTotal[] = new int[nums1.length + nums2.length];
            double media;
            int tam = numsTotal.length + 1;

                //Faz um novo array com os valores de nums1 e nums2
                System.arraycopy(nums1, 0, numsTotal, 0, nums1.length);
                System.arraycopy(nums2, 0, numsTotal, nums1.length, nums2.length);
    
            //Ordena os arrays nums1 e nums2.
            Arrays.sort(numsTotal);
                                //imprime o valor apenas pra saber qual o valor
            System.out.println(((double)numsTotal[tam/2] + numsTotal[((tam )/2)-1]) / 2);
            
            //Verifica oq fazer se for par ou impar para achar a media do meio
            if( numsTotal.length % 2 == 0){
                //Faz o calculo para pegar a media dos valores do meio caso for par
                media = (double) (numsTotal[tam/2] + numsTotal[((tam )/2)-1]) /2;
            }else{
                //Faz o calculo para pegar a media dos valore do meio caso for impar
                media = numsTotal[numsTotal.length/2];
            }
    
            return media;
            }
        
        
    }
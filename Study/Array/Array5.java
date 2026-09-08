//package Array;

import java.util.Random;

public class Array5 {
    public static void main(String[] args){
        int[] arr = {1, 2, 3, 4, 5};
        Random r = new Random();
        //Random的方法nextInt(), 中的参数是bound边界,
        //从[0, bound) 之间生成随机数
        // int randomIndex = r.nextInt(arr.length);
        // System.out.println(randomIndex);
        for(int i = 0; i < arr.length; i++){
            int radomIndex = r.nextInt(arr.length);
            int tmp = arr[i];
            arr[i] = arr[radomIndex];
            arr[radomIndex] = tmp;
        }
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

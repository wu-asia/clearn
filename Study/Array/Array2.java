//package Array;

public class Array2 {
    public static void main(String[] args){
        int[] arr = {1, 2, 3, 4, 5};
        int num = arr[0];
        System.out.println(arr[0]);
        System.out.println(arr[1]);
        arr[0] = 101;
        System.out.println(arr[0]);
        for(int i = 0; i < arr.length; i++)
            System.out.println(arr[i]);
    }
}

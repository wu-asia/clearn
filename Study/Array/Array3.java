//package Array;

import java.util.Scanner;

public class Array3 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        for(int i = 0; i < arr.length; i++){
            if(arr[i] % 2 == 0)
                arr[i] /= 2;
            else
                arr[i] *= 2;
        }
        for(int i = 0; i < arr.length; i++)
            System.out.println(arr[i]);
    }
}

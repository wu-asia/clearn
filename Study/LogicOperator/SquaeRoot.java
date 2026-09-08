//package LogicOperator;

import java.util.Scanner;

public class SquaeRoot {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int l = 1;
        int r = num;
        while(l < r){
            int mid = (l + r + 1) / 2;
            if(mid * mid <= num) l = mid;
            else r = mid - 1;
        }
        System.out.println(l);
    }
}

//package LogicOperator;

import java.util.Scanner;

public class Item {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("please input the money paied");
        int money = sc.nextInt();
        if(money >= 600){
            System.out.println("successfully pay");
        }
        else{
            System.out.println("failed to pay");
        }
    }
}

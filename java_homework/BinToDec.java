
import java.util.Scanner;
public class BinToDec {
    public static void main(String[] args){
        System.out.print("请输入一个十进制数字:");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.print("二进制表示为:");
        if(num == 0) System.out.println(0);
        else if(num < 0){
            num = -num;
            System.out.print("-");
        }
        Bin2Dec(num);
        System.out.println();
    }
    public static void Bin2Dec(int num){
        if(num == 0) return;
        else{
            Bin2Dec(num / 2);
            System.out.print(num % 2); 
        }           
    }
}



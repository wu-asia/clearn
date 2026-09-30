import java.util.Scanner;
public class StringBuilderDemo3 {
    static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int len = str.substring(1).replace("a","q").length();
        System.out.println(len);
    }
}

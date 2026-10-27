import java.util.Scanner;

public class CharTest {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char ch = sc.next().charAt(0);
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == ch){
                System.out.println(i + "位置的字符和" + ch + "相同");
            }
        }
        sc.close();
    }
}

public class Test2 {
    public static void main(String[] args){
        int[] num = {10, 20, 30};
        System.out.println("before using ther method change : " + num[1]);
        change(num);
        System.out.println("after using the method change : " + num[1]);
    }
    public static void change(int[] num){
        num[1] = 200;
    }
}

public class Test1 {
    public static void main(String[] args){
        int num = 100;
        System.out.println("before using ther method change : " + num);
        change(num);
        System.out.println("after using the method change : " + num);

    }
    public static void change(int num){
        num = 200;
    }
}

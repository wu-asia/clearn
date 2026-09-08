//package Study.ObjectOriented;

public class Demo1 {
    public static void main(String[] args){
        Phone p = new Phone();
        p.name = "xiaomi";
        p.price = 1999.98;
        System.out.println(p.name);
        System.out.println(p.price);
        p.playGame();
        p.call();

        Phone p2 = new Phone();
        p2.name = "iphone";
        p2.price = 8899.13;
        
    }
}

class Fu{
    String name = "Fu";
}
class Zi extends Fu{
    String name = "Zi";
    public void ziShow(){
        // 就近原则
        String name = "ziShow";
        System.out.println(name);
        // 使用子类
        System.out.println(this.name);
        // 使用父类
        System.out.println(super.name);
    }
}

public class FuZiTest{
    public static void main(String[] args){
        new Zi().ziShow();
    }
}
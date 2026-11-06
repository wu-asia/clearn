// （1）定义一个接口，其中包含一个 display () 方法用于显示信息；
// 通知类、汽车类、广告类均要实现该接口，
// 以显示 “通知内容”、“汽车油量”、“广告消息”。
// 试编程实现并测试类的设计。
// 创建的对象用接口引用，并通过接口引用变量执行 display () 方法。
interface Temp{
    void display();
}

class Notice implements Temp{
    @Override 
    public void display(){
        System.out.println("通知内容");
    }
}

class Cars implements Temp{
    @Override 
    public void display(){
        System.out.println("汽车油量");
    }
}

class Ads implements Temp{
    @Override 
    public void display(){
        System.out.println("广告消息");
    }
}

public class T{
    public static void main(String[] args){
        Temp tmp1 = new Notice();
        Temp tmp2 = new Cars();
        Temp tmp3 = new Ads();
        tmp1.display();
        tmp2.display();
        tmp3.display();
    }
}
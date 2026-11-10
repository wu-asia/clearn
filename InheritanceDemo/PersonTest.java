// 重写方法的名称、形参列表必须和父类中的一致
// 子类重写父类方法时、访问权限子类必须大于父类
// 子类重写父类方法时，返回值类型子类必须小于等于父类
// 建议：重写的方法尽量和父类保持一致
// 只有被添加到虚方法表中的方法才可以被重写

public class PersonTest {
    public static void main(String[] args){
        Student s = new Student();
        s.lunch();
        new OverseasStudent().lunch();
    }
}

class Person{
    public void eat(){
        System.out.println("eat rice, eat ect.");
    }
    public void drink(){
        System.out.println("drink water");
    }
}

class OverseasStudent extends Person{
    public void lunch(){
        eat();
        drink();
        this.eat();
        this.drink();
        super.eat();
        super.drink();
    }
    @Override 
    public void eat(){
        System.out.println("eat ital");
    }
    @Override 
    public void drink(){
        System.out.println("drink coco");
    }
}
class Student extends Person{
    public void lunch(){
        // 先在本类中查看eat和drink方法，
        // 就会调用子类中的方法，如果没有，
        // 就会调用从父类中继承下来的eat和drink方法
        this.eat();
        this.drink();
        // 直接调用费雷中的eat和drink方法
        super.eat();
        super.drink();
    }
}

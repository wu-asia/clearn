public class FuZiTest2 {
    public void main(String[] args){
        Zi z = new Zi();
        z.show();
    }
}
class Fu{
    String name = "Fu";
    String hobby = "tea";
}

class Zi extends Fu{
    String name = "Zi";
    String game = "game";
    public void show(){
        // print Zi
        System.out.println(this.name);
        System.out.println(super.name);
        System.out.println(super.hobby);
        System.out.println(this.game);
        System.out.print(hobby);
    }
}

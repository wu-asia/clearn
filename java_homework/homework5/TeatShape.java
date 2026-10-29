import java.util.ArrayList;
public class TeatShape {
    public static void main(String[] args){
        ArrayList<Shape> shapeArr = new ArrayList<>();
        shapeArr.add(new Triangle(4.4, 5));
        shapeArr.add(new Rectangle(3,6.1));
        shapeArr.add(new Circle(2.5));
        for(Shape e : shapeArr){
            System.out.println(e.area());
        }
    }
}

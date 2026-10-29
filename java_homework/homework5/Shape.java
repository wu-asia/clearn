public abstract class Shape {
    public abstract double area();
}

class Triangle extends Shape{
    private double height;
    private double base;
    Triangle(){}
    Triangle(double height, double base){
        this.height = height;
        this.base = base;
    }
    public void setBase(double base){
        this.base = base;
    }
    public double getBase(){
        return this.base;
    }
    public void setHeight(double height){
        this.height = height;
    }
    public double getHeight(){
        return this.height;
    }
    @Override
    public double area(){
        return height * base / 2;
    }
}

class Rectangle extends Shape{
    private double length;
    private double breadth;
    Rectangle(){}
    Rectangle(double length, double breadth){
        this.breadth = breadth;
        this.length = length;
    }
        public void setLength(double length){
        this.length = length;
    }
    public double getLength(){
        return this.length;
    }
    public void setBreadth(double breadth){
        this.breadth = breadth;
    }
    public double getBreadth(){
        return this.breadth;
    }
    @Override 
    public double area(){
        return length * breadth;
    }
}

class Circle extends Shape{
    private double radius;
    Circle(){}
    Circle(double radius){
        this.radius = radius;
    }
    public void setRadius(double radius){
        this.radius = radius;
    }
    public double getRadius(){
        return this.radius;
    }
    @Override 
    public double area(){
        return Math.PI * radius * radius;
    }
}
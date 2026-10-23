
public class Point {
    double x;
    double y;
    public Point(double x, double y){
        this.x = x; this.y = y;
    }
    public void setPoint(double x, double y){
        this.x = x;
        this.y = y;
    }
    public double getDist(){
        return Math.sqrt(this.x * this.x + this.y * this.y);
    }
}

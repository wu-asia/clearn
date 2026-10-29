import java.util.ArrayList;
import java.util.Random;

public class TestPoint {
    public static void main(String[] args){
        ArrayList<Point> arr = new ArrayList<>();
        Random rand = new Random();
        int n = 10;
        for(int i = 0; i < n; i++){
            int x = rand.nextInt(10);
            int y = rand.nextInt(10);
            Point p = new Point(x, y);
            arr.add(p);
        }
        for(int i = 0; i < arr.size() - 1; i++){
            for(int j = 0; j < arr.size() - 1 - i; j++){
                // j > j + 1
                if(arr.get(j).getDist() > arr.get(j + 1).getDist()){
                    Point tmp = arr.get(j);
                    arr.set(j, arr.get(j + 1));
                    arr.set(j + 1, tmp);
                }
            }
        }
        for(int i = 1; i <= arr.size(); i++){
            System.out.println(" " + arr.get(i).x + " " + arr.get(i).y);
        }
    }
}

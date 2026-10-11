import java.util.ArrayList;
public class StudentUtil {
    private StudentUtil(){}
    public static int getMax(ArrayList<Student> arr){
        int max = arr.get(0).getAge();
        for(int i = 1; i < arr.size(); i++){
            int tmp = arr.get(i).getAge();
            if(tmp > max){
                max = tmp;
            }
        }
        return max;
    }
}

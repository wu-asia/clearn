import java.util.HashSet;
import java.util.Set;
import java.util.ArrayList;
import java.util.Collections;
public class RadomNum {
    static public void main(String[] args){
        Set<Integer> set = new HashSet<>();
        while(set.size() < 20){
            // [10, 91)
            int num = (int)(Math.random() * 81 + 10);
            set.add(num);
        }
        StringBuilder sb = new StringBuilder();
        ArrayList<Integer> arr = new ArrayList<>();
        for(Integer n : set){
            if(sb.length() > 0){
                sb.append(", ");
            }
            sb.append(n);
            arr.add(n);
        }
        System.out.println(sb.toString());
        Collections.sort(arr);
        for(Integer n : arr){
            System.out.println(n);
        }
    }
}

import java.util.ArrayList;
// import java.util.Integer;
import java.util.Scanner;
public class RepeatedNum {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        // 读入数组
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int count = 0;

        // 判断每个数字是否重复
        for (int i = 0; i < n; i++) {
            boolean repeated = false;

            // 检查 arr[i] 前面是否出现过相同数字
            for (int j = 0; j < i; j++) {
                if (arr[i] == arr[j]) {
                    repeated = true;
                    break;
                }
            }

            // 如果前面没有出现过，再检查后面是否有相同数字
            if (!repeated) {
                for (int j = i + 1; j < n; j++) {
                    if (arr[i] == arr[j]) {
                        count++;
                        break;
                    }
                }
            }
        }

        System.out.println(count);

        sc.close();
    }
}

public class Hello{
    public static void main(String[] args){
        System.out.println("hello world");
        int[] arr = {10, 20, 50, 70, 200, 90};
        int Max = arr[0];
        for(int i = 0; i <= arr.length; i++){
            if(arr[i] > Max){
                Max = arr[i];
            }
        }
        System.out.println(Max);
    }
}
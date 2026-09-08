public class CopyArray {
    
    public static void main(String[] args){
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int[] copyArr = copyOfRange(arr, 3, 7);
        for(int i = 0; i < copyArr.length; i++){
            System.out.print(copyArr[i] + " ");
        }
        System.out.println();
    }
    public static int[] copyOfRange(int[] arr, int from, int to){
        int[] newArr = new int[to - from];

        for(int i = from, index = 0; i < to; i++, index++){
            newArr[index] = arr[i];         
        }
        return newArr;
    }
}

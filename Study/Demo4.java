public class Demo4 {
    public static void main(String[] args){

    }
        public static String arrToString(int[] arr){
        if(arr == null){
            return "";
        }
        if(arr.length == 0){
            return "[]";
        }
        String ret = "[";
        for(int i = 0; i < arr.length; i++){
            ret = ret + arr[i];
        }
        ret += "]";
        return ret;
    }
}

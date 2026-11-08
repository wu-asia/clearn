

    class V1{
        public int x=2;
        V1(){
             System.out.println("V1");
        } 
    }
    class V2 extends V1{
        public int x = 3;
        V2(){
            System.out.println("V2");
        } 
    }
    class H1{
        public static void main(String[] s){
        V1 e1=new V2();	
        System.out.println(e1.x);	
        } 
    }



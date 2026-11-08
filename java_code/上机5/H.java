
    class V1{
    int a=3;
    void m1(){ System.out.println(a); } 
    }
    class E1 extends V1{
        int a=5,b=3,c;
        void m2(){ System.out.println(a); } 
    }
    class H{
        public static void main(String[] s){
        E1 e1=new E1();
        e1.m1();  
        e1.m2(); 
    }
}


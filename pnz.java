import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        if(n>0)
        System.out.println("Positive");
        if(n<0)
        System.out.println("Negative");
        else
        System.out.println("Zero");
    }
}

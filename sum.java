import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s=new Scanner(System.in);
        int max=0,min=99;
        int a[]=new int[100];
        int n=s.nextInt();
        for(int i=0;i<n;i++)
          a[i]=s.nextInt();
        for(int i=0;i<n;i++)
        {  
          if(a[i]>max){
                max=a[i];
            }
            else if(a[i]<min){
                min=a[i];
            }
        }
      System.out.println(max+min);
    }
}

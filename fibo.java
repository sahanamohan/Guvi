import java.util.*;
import java.lang.*;
import java.io.*;

class Fibo
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s=new Scanner(System.in);
		int n1=0,n2=1,n3,i;
		int c=s.nextInt();
			 System.out.print(n1+" "+n2);
	    for(i=2;i<c;++i)   
 			{    
				  n3=n1+n2;    
				  System.out.print(" "+n3);    
				  n1=n2;    
				  n2=n3; 
			}
	}
}

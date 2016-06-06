import java.util.*;
import java.lang.*;
import java.io.*;

class Fibo
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s=new Scanner(System.in);
		int n1=0,n2=1,n3,i,c=0;
		int n=s.nextInt();
	    for(i=1;i<n;++i)   
 			{    
				  n3=n1+n2;    
				  n1=n2;    
				  n2=n3; 
				  c=c+n3; 
			}System.out.println(c+1);
	}
}

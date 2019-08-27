import java.lang.*;
import java.io.*;
import java.util.*;

class demo
{
	public static void main(String arg[])
	{
		Hashtable<String,String> ht=new Hashtable<String,String>();

		ht.put("TWO","7");
		ht.put("Three","3");
		ht.put("four","5");
		//ht.put("six","2");
			System.out.println("The value of two is "+ht.get("TWO")); //2

		if(ht.contains(ht.get("TWO")))
		{
			
		}
		else
		{
		ht.put("five","2");
		}
		System.out.println(ht);
	}
}

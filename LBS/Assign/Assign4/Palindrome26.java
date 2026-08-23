import java.util.Arrays;
import java.util.Scanner;

public class Palindrome26{
	public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter a word : ");
	String str= sc.next();
	str=str.toLowerCase();
	
	String rev="";
	for(int i=0; i<str.length(); i++){
		rev= str.charAt(i)+rev;
	}

	if(str.equals(rev)){
		System.out.println("The word '"+ str + "' is a Palindrome");
	} else {
		System.out.println("The word '"+ str + "' is not a Palindrome");
	}


}
}
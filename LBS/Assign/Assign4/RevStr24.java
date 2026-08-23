import java.util.Arrays;
import java.util.Scanner;

public class RevStr24{
	public static void main(String args[]){
	
	Scanner sc= new Scanner(System.in);
	System.out.println("Enter a word : ");
	String str=sc.next();

	String rev ="";
	for(int i=0; i< str.length(); i++){
		rev=str.charAt(i)+rev;
}
	System.out.println("Reversed word : " );
	System.out.println(rev);
	
}
}
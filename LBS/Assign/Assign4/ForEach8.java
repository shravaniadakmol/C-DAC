import java.util.Scanner;
import java.util.Arrays;


class ForEach8{
	public static void main(String args[]){
	
	Scanner sc= new Scanner(System.in);     
	String[] arr= new String[4];

	System.out.println("Enter 4 names : ");
	for(int i=0; i<=3; i++){
		String input=sc.next();
		arr[i]= input;
}

	System.out.println("Names are : ");
	for(String input:arr){
		System.out.println(input);
		}
	}
}	




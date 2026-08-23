import java.util.Arrays;
import java.util.Scanner;

public class FoundNotFound13{
	public static void main(String args[]){
	
	Scanner sc= new Scanner(System.in);
	System.out.println("Enter 5 numbers: ");

	Integer[] arr= new Integer[5];


	for(int i=0; i<5; i++){
		arr[i]=sc.nextInt();
	}

	System.out.println("Eneter a number to search : ");
		int num =sc.nextInt();
		if(Arrays.asList(arr).contains(num)){
			 System.out.println("Found the number: " + num);
			} else 	{ System.out.println("Not Found the number: " + num);
			}
}
}






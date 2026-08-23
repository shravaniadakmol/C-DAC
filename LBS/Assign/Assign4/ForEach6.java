import java.util.Scanner;
import java.util.Arrays;


class ForEach6{
	public static void main(String args[]){
	
	Scanner sc= new Scanner(System.in);     
	int[] arr= new int[5];

	System.out.println("Enter 5 numbers : ");
	for(int i=0; i<=4; i++){
		int input=sc.nextInt();
		arr[i]= input;
}

	System.out.println("Your array list is : ");
	for(int input:arr){
		System.out.println(input);
		}
	}
}	




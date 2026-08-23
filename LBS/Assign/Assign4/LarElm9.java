import java.util.Arrays;
import java.util.Scanner;

public class LarElm9{
	public static void main(String args[]){

		Scanner sc= new Scanner(System.in);
			System.out.println("Enter 5 numbers : ");
			
		int[] arr= new int[5];

		for(int i=0; i<5 ; i++){
			arr[i]=sc.nextInt();}
		Arrays.sort(arr);
		System.out.println("Largest Element is : " + arr[arr.length-1]);
}
}
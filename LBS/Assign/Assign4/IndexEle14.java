import java.util.Arrays;
import java.util.Scanner;

public class IndexEle14{
	public static void main(String args[]){


	Scanner sc= new Scanner(System.in);
	int[] arr= new int[5];

	System.out.println("Enter 5 numbers : ");
	for(int i=0; i<5; i++){
		arr[i]=sc.nextInt();
}

	System.out.println("Eneter a number to search : ");
		int num =sc.nextInt();
		Arrays.sort(arr);
		int index = Arrays.binarySearch(arr, num);
		if(index>=0){
			 System.out.println("The number " + num + " is found at " + index + " index");
			} else 	{ System.out.println("Not Found the number: " + num);
			}



}
}








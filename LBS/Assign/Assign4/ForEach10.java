import java.util.Scanner;
import java.util.Arrays;


class ForEach10{
	public static void main(String args[]){
	
	Scanner sc= new Scanner(System.in);     
	int[] arr= new int[5];

	System.out.println("Enter 5 numbers : ");
	for(int i=0; i<=4; i++){
		int input=sc.nextInt();
		arr[i]= input;
}
	
	int sum=0;
	int avg=0;
	System.out.println("Your avg is : ");
	for(int input:arr){
		sum+=input;
		avg = sum/arr.length;
	}
	System.out.println(avg);
}	

}


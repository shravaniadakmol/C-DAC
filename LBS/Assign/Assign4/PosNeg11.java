import java.util.Arrays;
import java.util.Scanner;

public class PosNeg11{
	public static void main(String args[]){

	Scanner sc= new Scanner(System.in);
	System.out.println("Enter 6 numbers (+,-) : ");

	int[] arr=new int[6];
	int posCount = 0;
	int negCount = 0;
		
	for(int i=0; i<6; i++){
		arr[i]=sc.nextInt();


		if(arr[i]>0){
			posCount++;


		} else if(arr[i]<0){
			negCount++;
		}
	}

		System.out.println("Positive Numbers are : " + posCount);
		System.out.println("Negative Numbers are :"+ negCount);
}
}
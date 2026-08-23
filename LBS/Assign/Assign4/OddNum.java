import java.util.Scanner;

class OddNum{
	public static void main(String args[]){
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter a number : ");

		int num = sc.nextInt();
		System.out.println("Odd num are :");

		for (int i=1; i <= num; i++){
			if(i % 2 == 1){
				System.out.println(i);

			}
		}

}


}




import java.util.Scanner;

class PositiveNumber {
	static void askForPositiveNumber(){
		Scanner sc = new Scanner(System.in);
		int num;

		do{
			System.out.println("Enter a Positive number : ");
			num= sc.nextInt();
		} while (num <= 0);
			System.out.println("You entered a positive number : " + num);
		}

	public static void main(String args[]){
		askForPositiveNumber();
	}
}
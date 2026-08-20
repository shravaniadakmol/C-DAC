import java.util.Scanner;


class checkAgeCategory{

	static int Category(int age){

		if (age <= 17) {
			System.out.println("You are Minor.");
		} else if (age <= 59) {
			System.out.println("You are Adult.");
		} else if (age <= 111) {
			System.out.println("You are a Senior Citizen.");
		} else {
			System.out.println("Immutable!!");
		}
		return (age);
		
	}
	

	public static void main(String args []) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter your Age : "  );
		int a = sc.nextInt();
		Category(a);
	}
}
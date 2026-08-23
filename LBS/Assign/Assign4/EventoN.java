import java.util.Scanner;

class EventoN{
	public static void main(String args[]){
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter a number : ");

		int num = sc.nextInt();
		System.out.println("Multiples of 2 are :");

		for (int i=1; i <= num; i++){
			if(i % 2 == 0){
				System.out.println(i);

			}
		}

}


}




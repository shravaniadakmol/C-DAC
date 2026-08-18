class LargestNum{
	public static void main(String args[]){
	int num1 = 7;
	int num2 = 59;
	int num3 = 10;
		if (num1 > num2){
			if (num1 > num3){
				System.out.println("Largest num is :" +num1);
			} else {
				System.out.println("Largest num is :" +num3);
			}
		} else {
			if (num2 > num3){
				System.out.println("Largest num is :" +num2);
			} else { 
				System.out.println("Largest num is :" +num3);
			}
		}

	}
}
class GrdEval{
	public static void main (String args[]){
		int english = 55;
		int maths = 92;
		int science = 69;
		int history = 72;
		
		float avg = (english + maths + science + history) / 4.0f;

			System.out.println("Average Marks : " + avg);
		
			if (avg >=90){
				System.out.println("Grade : A");
			} else if (avg >= 70){
				System.out.println("Grade : B");
			} else if (avg >= 50){
				System.out.println("Grade : C");
			} else if (avg >= 30){
				System.out.println("Grade : D");
			} else {
				System.out.println("Grade : Fail");
			}

	}		

}
class Year{
	public static void main(String args[]){
		int yr1 = 1999;
		int yr2 = 2020;


		if ((yr1 % 4 == 0 && yr1 % 100 != 0) || yr1 % 400 == 0) {
			System.out.println(yr1 + " is a Leap year");
		} else {
			System.out.println(yr1 + " is not a Leap year");
		}


		if ((yr2 % 4 == 0 && yr2 % 100 != 0) || yr2 % 400 == 0) {
			System.out.println(yr2 + " is a Leap year");
		} else {
			System.out.println(yr2 + " is not a Leap year");
		}


	}
}
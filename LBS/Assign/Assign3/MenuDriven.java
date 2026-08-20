import java.util.Scanner;

class MenuDriven
	{
	static void gradeEvaluation()
{

		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter maths marks : ");
			int maths = sc.nextInt();
		
		System.out.println("Enter sci marks : ");
			int sci = sc.nextInt();
		
		System.out.println("Enter eng marks : ");
			int eng = sc.nextInt();
	
		int avg = (maths + sci + eng ) / 3;
			
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


	static void LeapYear () {

		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter Year  : ");
			int yr1 = sc.nextInt();

		if ((yr1 % 4 == 0 && yr1 % 100 != 0) || yr1 % 400 == 0) {
			System.out.println(yr1 + " is a Leap year");
		} else {
			System.out.println(yr1 + " is not a Leap year");
		}


	}


	static void DayofWeek ()
{

		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Day Number  : ");
			int dayNum1 = sc.nextInt();



		switch (dayNum1) {
			case 1 : 
			   System.out.println("The day is Monday");
				break;
			case 2 : 
			   System.out.println("The day is Tueday");
			   break;
			case 3 : 
			   System.out.println("The day is Wednesday");
		  	   break;
			case 4 : 
			   System.out.println("The day is Thursday");
			   break;
			case 5 : 
			   System.out.println("The day is Friday");
			   break;
			case 6 : 
			   System.out.println("The day is Saturday");
			   break;
			case 7 : 
			   System.out.println("The day is Sunday");
			   break;
			default:
			   System.out.println("Invalid day number");
			   break;
		}	
		
		
	}


	static void Shravani () {

    byte a;
    short b;
    int c;
    long d;
    float e;
    double f;
    char g;
    boolean h;


        Datatypes obj = new Datatypes();

        System.out.println("byte: " + obj.a);
        System.out.println("short: " + obj.b);
        System.out.println("int: " + obj.c);
        System.out.println("long: " + obj.d);
        System.out.println("float: " + obj.e);
        System.out.println("double: " + obj.f);
        System.out.println("char: " + obj.g);
        System.out.println("boolean: " + obj.h);
    }


public static void main(String args[]) 
{
	Scanner sc = new Scanner (System.in);
	System.out.println("Enter your choice (1-4) : ");
	int choice = sc.nextInt();
	switch (choice)
	{
		case 1:
			gradeEvaluation();
			break;
		case 2:
			LeapYear();
			break;
		case 3:
			DayofWeek();
			break;
		case 4:
			Shravani();
			break;
		default:
			System.out.println("Exit");
	}
}

	}	













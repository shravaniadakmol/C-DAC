public class Pool30{
	public static void main(String args[]){

	String N1 = new String ("shravani");
	String N2 = N1.intern();
	String N3 = "shravani";

	System.out.println("Is N2 and N3 pntg to the same obj? " + (N2 == N3));

	
}
}

public class user_defined_data_type {

	private String name;
	private String id;
	private String adress;
	private float credit;
	
	public static void main(String[] args) {
		user_defined_data_type client_1 = new user_defined_data_type(
											"Anthony Luzquiños",
											"0000000001",
											"Calle 1, Distrito 1, Ciudad 1, País 1", 
											1000000);
		System.out.println(client_1);
	}
	
	public user_defined_data_type(String name, String id, String adress, float credit){
		this.name = name;
		this.id = id;
		this.adress = adress;
		this.credit = credit;
	}
	
	@Override
	public String toString() {
		return "The client's name is: "+this.name+".\n"
				+"The client's id is: "+this.id+".\n"
				+"The client's adress is: "+this.adress+".\n"
				+"The client's credit is: "+this.credit+".";
	}	
}

package examples;

/**
 * One object of class Employee stores the personal information for one Employee
 *
 */
public class Employee {
	
	private int empNo;
	private double salary;
	private String department;
	
	/**
	 * default constructor which assigns default values to the private variables
	 * @return
	 */
	public Employee(){
		this.setEmpNo(0);
		this.setSalary(0.0);
		this.setDepartment("");
	}
	
	public Employee(int empNo, double salary, String department) {
		super();
		this.empNo = empNo;
		this.salary = salary;
		this.department = department;
	}
	
	public int getEmpNo() {
		return empNo;
	}

	public void setEmpNo(int empNo) {
		this.empNo = empNo;
	}
	
	public double getSalary() {
		return salary;
	}
	
	public void setSalary(double salary) {
		this.salary = salary;
	}
	public String getDepartment() {
		return department;
	}
	public void setDepartment(String department) {
		this.department = department;
	}
	
	/**
	 * Returns a String containing all the data stored in this object
	 */
	public String toString(){
		String result = this.getEmpNo() + " " + this.getSalary() + " " + this.getDepartment();
		
		return result;
	}
}

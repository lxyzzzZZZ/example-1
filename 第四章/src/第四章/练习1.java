package ������;

class Persons {
	String name;
	
}
class Student extends Persons {
	int age;
	public void printName() {
		System.out.println("���ֽ�:" +name);
	}
}
class Teather extends Persons {
	String sex;
	
	public void printName() {
		System.out.println("���ֽ�:" +name);
}


public static class ��ϰ1 {
	public static void main(String[] args) {
		Student stu = new Student();
		Teather tea = new Teather();
		stu.name="����";
		tea.name="����";
		stu.printName();
		tea.printName();
	}
}
}


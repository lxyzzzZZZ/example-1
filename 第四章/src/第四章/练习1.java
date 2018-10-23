package 第四章;

class Persons {
	String name;
	
}
class Student extends Persons {
	int age;
	public void printName() {
		System.out.println("名字叫:" +name);
	}
}
class Teather extends Persons {
	String sex;
	
	public void printName() {
		System.out.println("名字叫:" +name);
}


public static class 练习1 {
	public static void main(String[] args) {
		Student stu = new Student();
		Teather tea = new Teather();
		stu.name="张三";
		tea.name="李四";
		stu.printName();
		tea.printName();
	}
}
}


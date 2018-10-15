package 第三章;
public class Student{
	String name;
	int age;
	public void speak() {
		System.out.println("大家好，我叫：" + name +",我今年：" + age + "岁");
	}
	//无参的构造方法
	public Student() {
		System.out.println("无参的方法");
		age = 0;
		name = null;
	}
	//接收一个String类型参数的构造方法
	public Student(String con_name) {
		this();
		System.out.println("有参的方法");
	}
	//接收一个String类型,一个int类型参数的构造方法
	public Student(String con_name,int con_age) {
		this(con_name);
		this.age=con_age;
		System.out.println("俩个参数的方法");
	}
	//练习3-3
	//public Student() {
		//age = 0;
		//name = null;
	//}
	//public Student(String con_name) {
		//name = con_name;
	//}
	//public Student(String con_name,int con_age) {
		//this(con_name);
		//this.age=con_age;
	//}
	
}

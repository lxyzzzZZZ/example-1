package ������;
public class Student{
	String name;
	int age;
	public void speak() {
		System.out.println("��Һã��ҽУ�" + name +",�ҽ��꣺" + age + "��");
	}
	//�޲εĹ��췽��
	public Student() {
		System.out.println("�޲εķ���");
		age = 0;
		name = null;
	}
	//����һ��String���Ͳ����Ĺ��췽��
	public Student(String con_name) {
		this();
		System.out.println("�вεķ���");
	}
	//����һ��String����,һ��int���Ͳ����Ĺ��췽��
	public Student(String con_name,int con_age) {
		this(con_name);
		this.age=con_age;
		System.out.println("���������ķ���");
	}
	//��ϰ3-3
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

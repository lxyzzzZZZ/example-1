package 第三章;

public class Example01 {
	public static void main(String[] args) {
		Student s1 = new Student();
		s1.name = "张三";
		s1.age = 19;
		s1.speak();
		Student s2 = new Student();
		s2.name = "李四";
		s2.age = 20;
		s2.speak();
		Student s3 = new Student();
		s3=s2;
		s3.speak();
	}

}
//1）编写Example01类
//2）在main()方法中，创建Student类的第一个对象，其引用变量为s1，使用s1调用name和age变量分别为它们赋值为“张三”和“19”，然后调用speak()方法。
//3）创建Student类的第二个对象，其引用变量为s2，使用s2分别为name和age赋值为“李四”和“20”，然后调用speak()方法。
//4）创建Student类的第三个对象，其引用变量为s3，将s2的值赋给s3，然后使用s3调用speak()方法。
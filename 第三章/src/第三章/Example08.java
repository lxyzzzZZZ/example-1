package 第三章;

public class Example08 {
	public static void main(String[] args) {
		Student03 s1 =new Student03();
		Student03 s2 =new Student03();
		s1.name = "李四";
		s2.name = "张三";
		Student03.ClassName = "三年级二班";
		System.out.println("大家好，我叫：" + s1.name +",我在：" + s1.ClassName);
		System.out.println("大家好，我叫：" + s1.name +",我在：" + s2.ClassName);
	}

}

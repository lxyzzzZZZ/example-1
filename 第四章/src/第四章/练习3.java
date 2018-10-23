package 第四章;
class Fu {
	public Fu () {
		System.out.println("在码代码呢!");
	}
}
class Zi extends Fu{
	public Zi() {
		super();
	}
}
public class 练习3 {
	public static void main(String[] args) {
		Zi n = new Zi();
	}
}

















//设计思路
//1）编写一个Fu类，在类中定义无参构造。
//2）Zi类继承Fu类，子类中也定义无参构造方法，在构造方法中使用super关键字调用Fu类的构造方法。
//3）定义测试类Example05。
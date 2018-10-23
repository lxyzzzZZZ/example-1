package 第四章;
interface Inter{
	int num= 20;
	void method();
}
class InterImpl implements Inter{
	public  void method() {
		System.out.println("我今年" + num + "岁了.");
	}
}
public class 练习4 {
	public static void main(String[] args) {
		InterImpl n = new InterImpl();
		n.method();
	}
}




















//练习4-4  接口的实现
//设计思路
//1）设计名为Inter的接口，接口中定义一个初始值为20的num常量和method()抽象方法。
//2）编写Inter接口的实现类InterImpl，使用implements关键字实现接口中的方法。
//3）编写测试类Example10，测试类中对接口的实现类进行实例化，并调用接口中的方法。
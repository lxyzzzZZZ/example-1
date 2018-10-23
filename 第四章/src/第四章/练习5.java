package 第四章;
interface Phone2{
	void receiveMessage();
	void call();
}
interface SmartPhone extends Phone2{
	void faceTime();
}
class MIPhone implements SmartPhone{
	public void receiveMessage() {
		System.out.println("接受信息");
	}
	public void call() {
		System.out.println("打电话");
	}
	public void faceTime() {
		System.out.println("智能手机");	
	}
}
public class 练习5 {
	public static void main(String[] args) {
		MIPhone ph = new MIPhone();
		ph.receiveMessage();
		ph.call();
		ph.faceTime();
	}
}










//练习4-5  接口的继承
//设计思路
//1）设计接口Phone代表传统手机，在接口中定义receiveMessages()和call()抽象方法。
//2）设计接口SmartPhone代表智能手机，在接口中定义faceTime()方法，并使用extends关键字继承Phone接口，使其具有Phone接口的所有功能。
//3）设计类MIPhone表示小米手机，类中定义useMIUI()方法，并实现SmartPhone接口的所有方法。
//4）编写测试类Example11，测试类中对MIPhone进行实例化，并访问小米手机具有的各种功能。
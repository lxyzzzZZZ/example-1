package 第四章;
interface Animal{
	void sleep();
}
class Cat implements Animal{
	public void sleep() {
		System.out.println("躺着睡");
	}
}
class CatMouse implements Animal{
	public void sleep() {
		System.out.println("睡醒抓老鼠");
	}
}
public class 练习6 {
	public static void main(String[] args) {
		Animal an1 = new Cat();
		Animal an2 = new CatMouse();
		animalSleep(an1);
		animalSleep(an2);
	}
		public static void animalSleep(Animal an) {
			an.sleep();
		}
	}












//练习4-6  多态的作用
//设计思路
//1）编写Animal接口，接口中定义sleep()方法。
//2）Cat类实现Animal接口的方法，并定义另一个方法catchMouse()
//3）编写测试类Example12，使Cat对象指向父类Animal的引用 ，并通过该引用调用sleep()方法。
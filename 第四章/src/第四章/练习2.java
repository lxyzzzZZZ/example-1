package 第四章;

class Phone{
	void call() {
		System.out.println("打电话功能");
	}
}
class NewPhone extends Phone{
	void call() {
		System.out.println("打电话功能 " + "开启语言功能 " + "关闭语言功能");
	}
}
public class 练习2 {
	public static void main(String[] args) {
		NewPhone n = new NewPhone();
		n.call();
	}
}












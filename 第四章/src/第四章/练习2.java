package ������;

class Phone{
	void call() {
		System.out.println("��绰����");
	}
}
class NewPhone extends Phone{
	void call() {
		System.out.println("��绰���� " + "�������Թ��� " + "�ر����Թ���");
	}
}
public class ��ϰ2 {
	public static void main(String[] args) {
		NewPhone n = new NewPhone();
		n.call();
	}
}












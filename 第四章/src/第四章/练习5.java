package ������;
interface Phone2{
	void receiveMessage();
	void call();
}
interface SmartPhone extends Phone2{
	void faceTime();
}
class MIPhone implements SmartPhone{
	public void receiveMessage() {
		System.out.println("������Ϣ");
	}
	public void call() {
		System.out.println("��绰");
	}
	public void faceTime() {
		System.out.println("�����ֻ�");	
	}
}
public class ��ϰ5 {
	public static void main(String[] args) {
		MIPhone ph = new MIPhone();
		ph.receiveMessage();
		ph.call();
		ph.faceTime();
	}
}










//��ϰ4-5  �ӿڵļ̳�
//���˼·
//1����ƽӿ�Phone����ͳ�ֻ����ڽӿ��ж���receiveMessages()��call()���󷽷���
//2����ƽӿ�SmartPhone���������ֻ����ڽӿ��ж���faceTime()��������ʹ��extends�ؼ��ּ̳�Phone�ӿڣ�ʹ�����Phone�ӿڵ����й��ܡ�
//3�������MIPhone��ʾС���ֻ������ж���useMIUI()��������ʵ��SmartPhone�ӿڵ����з�����
//4����д������Example11���������ж�MIPhone����ʵ������������С���ֻ����еĸ��ֹ��ܡ�
package ������;
interface Inter{
	int num= 20;
	void method();
}
class InterImpl implements Inter{
	public  void method() {
		System.out.println("�ҽ���" + num + "����.");
	}
}
public class ��ϰ4 {
	public static void main(String[] args) {
		InterImpl n = new InterImpl();
		n.method();
	}
}




















//��ϰ4-4  �ӿڵ�ʵ��
//���˼·
//1�������ΪInter�Ľӿڣ��ӿ��ж���һ����ʼֵΪ20��num������method()���󷽷���
//2����дInter�ӿڵ�ʵ����InterImpl��ʹ��implements�ؼ���ʵ�ֽӿ��еķ�����
//3����д������Example10���������жԽӿڵ�ʵ�������ʵ�����������ýӿ��еķ�����
package ������;

public class ��ϰ�� {
	public static void main(String[] args) {
		StringBuffer sb = new StringBuffer("abcdef");
		sb.replace(1,3,"qq");
		System.out.println("�滻ָ��λ���ַ������:" + sb);;
		System.out.println("��ת��" + sb.reverse());
		sb.delete(1,5);
		System.out.println("��ȡ:" + sb);
	}
}

//1��	��дһ����Example03
//2��	�����ж���һ��ArrayList����
//3��	��add()�����򼯺������Ԫ��
//4��	��get()������ȡ�����е�ָ��Ԫ�أ�����ArrayList���ϵ�������ȡֵ��Χ�Ǵ�0��ʼ�ģ�
//		���һ��������size-1�����ԣ�Ҫ��ȡ�����еĵ�2��Ԫ��Ӧ����get(1)��





package ������;
import java.util.*;
public class ��ϰ�� {
		public static void main(String[] args) {
			ArrayList<String> list = new ArrayList<String>();
			list.add("�Է�");
			list.add("˯��");
			list.add("��ˮ");
			list.add("�Ͽ�");
			System.out.println("������Ԫ�أ�" + list.get(2));
		}
}

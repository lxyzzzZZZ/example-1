//1��	��дһ����Example05
//2��	�����ж���һ��List���ϣ����򼯺����������
//3��	ͨ������List���ϵ�iterator()������õ���������
//4��	��whileѭ��������ʹ��hashNext()�����жϼ������Ƿ������һ��Ԫ�أ�������ڣ�
//		�����next()������Ԫ��ȡ��������˵���ѵ����˼���ĩβ��ֹͣ����Ԫ��
package ������;
import java.util.*;
public class ��ϰ�� {
	public static void main(String[] args) {
		ArrayList<String> list = new ArrayList<String>();
		list.add("1");
		list.add("2");
		list.add("3");
		list.add("4");
		Iterator<String> it = list.iterator();
		while(it.hasNext()) {
			Object obj  = it.next();
			System.out.println(obj);
		}
	}
}

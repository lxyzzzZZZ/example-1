//1��	��дһ����Example06��
//2��	�ڸ����ж���һ��List���ϣ��򼯺�������ĸ�Ԫ��
//3��	��foreachѭ�����������е�Ԫ��
//4��	�����ж���һ������arr����̬��ʼ������int[] arr = {3,2,6};
//5��	��foreachѭ������arr�е�Ԫ��
package ������;
import java.util.*;
public class ��ϰ�� {
	public static void main(String[] args) {
		ArrayList<String> list = new ArrayList<String>();
		list.add("1");
		list.add("2");
		list.add("3");
		list.add("4");
		for(Object obj : list) {
			System.out.println(obj);
		}
	}
}

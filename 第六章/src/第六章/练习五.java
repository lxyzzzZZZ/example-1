//1��	��дһ����Example07���ڸ����ж���һ��HashSet����hs
//2��	�򼯺�hs�����6��Ԫ�أ�������һЩ�ظ���Ԫ��
//3��	��size()������ȡ�����Ԫ�غ󼯺���Ԫ�صĸ���
//4��	��Iterator�������������ϵ�ÿһ��Ԫ��
//5��	�۲����������У��Ƿ�����ظ���Ԫ��
package ������;
import java.util.*;
public class ��ϰ�� {
	public static void main(String[] args) {
		HashSet<String> hs = new HashSet<String>();
		hs.add("1");
		hs.add("2");
		hs.add("2");
		hs.add("3");
		hs.add("3");
		hs.add("3");
		System.out.println("Ԫ�ظ���:" + hs.size());
		Iterator<String> it = hs.iterator();
		while(it.hasNext()) {
			Object obj = it.next();
			System.out.println(obj);
		}
	}
}

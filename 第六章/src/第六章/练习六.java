//1��	��д��Example10���ڸ����д���Map���ϲ��򼯺������Ԫ��
//2��	ʹ�õ�һ�ַ�ʽ����������Ԫ�أ��Ȼ�ȡ���ļ��ϣ��ٻ�ȡ������Ӧ��ֵ
//3��	ʹ�õڶ��ַ�ʽ���Ȼ�ȡ�����м�ֵ��ӳ���ϵ���ٴ�ӳ���ϵ�л�ü���ֵ
package ������;
import java.util.*;
public class ��ϰ�� {
	public static void main(String[] args) {
		Map<String, String> m =new HashMap<String, String>();
		m.put("1", "jack");
		m.put("2", "rose");
		m.put("3", "Lucy");
		Set<String> keySet = m.keySet();
		Iterator<String> it = keySet.iterator();
		while(it.hasNext()) {
			Object key = it.next();
			Object value = m.get(key);
			System.out.println(key + ":" + value);
		}
		System.out.println(m.get("1"));
		System.out.println(m.get("2"));
		System.out.println(m.get("3"));
	}
}

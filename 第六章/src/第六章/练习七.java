//1��	��дһ����Example11������Proeprties���϶���
//2��	��Proeprties���������Ԫ��
//3��	����Proeprties�����е�Ԫ��
package ������;
import java.util.*;
public class ��ϰ�� {
	public static void main(String[] args) {
		Properties p = new Properties();
		p.setProperty("Backgroup", "14px");
		p.setProperty("Font-size", "chinese");
		p.setProperty("Language", "red");
		Enumeration<?> names = p.propertyNames();
		while(names.hasMoreElements()) {
			String key = (String) names.nextElement();
			String value = p.getProperty(key);
			System.out.println(key+ " = " +value);
		}
	}
}

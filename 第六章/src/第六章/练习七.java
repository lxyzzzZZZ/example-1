//1）	编写一个类Example11，创建Proeprties集合对象
//2）	向Proeprties集合中添加元素
//3）	遍历Proeprties集合中的元素
package 第六章;
import java.util.*;
public class 练习七 {
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

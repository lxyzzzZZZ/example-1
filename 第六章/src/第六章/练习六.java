//1）	编写类Example10，在该类中创建Map集合并向集合中添加元素
//2）	使用第一种方式，遍历集合元素，先获取键的集合，再获取键所对应的值
//3）	使用第二种方式，先获取集合中键值对映射关系，再从映射关系中获得键和值
package 第六章;
import java.util.*;
public class 练习六 {
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

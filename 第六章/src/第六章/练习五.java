//1）	编写一个类Example07，在该类中定义一个HashSet集合hs
//2）	向集合hs中添加6个元素，其中有一些重复的元素
//3）	用size()方法获取添加完元素后集合中元素的个数
//4）	用Iterator迭代器遍历集合的每一个元素
//5）	观察在输出结果中，是否存在重复的元素
package 第六章;
import java.util.*;
public class 练习五 {
	public static void main(String[] args) {
		HashSet<String> hs = new HashSet<String>();
		hs.add("1");
		hs.add("2");
		hs.add("2");
		hs.add("3");
		hs.add("3");
		hs.add("3");
		System.out.println("元素个数:" + hs.size());
		Iterator<String> it = hs.iterator();
		while(it.hasNext()) {
			Object obj = it.next();
			System.out.println(obj);
		}
	}
}

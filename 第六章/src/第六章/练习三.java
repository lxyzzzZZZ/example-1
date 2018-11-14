//1）	编写一个类Example05
//2）	在类中定义一个List集合，并向集合中添加数据
//3）	通过调用List集合的iterator()方法获得迭代器对象
//4）	在while循环条件中使用hashNext()方法判断集合中是否存在下一个元素，如果存在，
//		则调用next()方法将元素取出，否则说明已到达了集合末尾，停止遍历元素
package 第六章;
import java.util.*;
public class 练习三 {
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

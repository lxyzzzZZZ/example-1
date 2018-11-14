//1）	编写一个类Example06，
//2）	在该类中定义一个List集合，向集合中添加四个元素
//3）	用foreach循环遍历集合中的元素
//4）	在类中定义一个数组arr，静态初始化数组int[] arr = {3,2,6};
//5）	用foreach循环遍历arr中的元素
package 第六章;
import java.util.*;
public class 练习四 {
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

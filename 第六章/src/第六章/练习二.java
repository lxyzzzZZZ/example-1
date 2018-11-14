//1）	编写一个类Example03
//2）	在类中定义一个ArrayList集合
//3）	用add()方法向集合中添加元素
//4）	用get()方法获取集合中的指定元素，由于ArrayList集合的索引的取值范围是从0开始的，
//		最后一个索引是size-1。所以，要获取集合中的第2个元素应该是get(1)。





package 第六章;
import java.util.*;
public class 练习二 {
		public static void main(String[] args) {
			ArrayList<String> list = new ArrayList<String>();
			list.add("吃饭");
			list.add("睡觉");
			list.add("喝水");
			list.add("上课");
			System.out.println("第三个元素：" + list.get(2));
		}
}

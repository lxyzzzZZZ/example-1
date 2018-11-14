//1）	编写一个类Example02
//2）	在类中定义两个list集合，并向其中一个集合中添加数据
//3）	用 subList(int fromIndex, int toIndex)方法获取集合的一部分
//4）	用set(int index, E element)方法修改一个元素
//5）	用add(int index, E element)方法增加一个元素
package 第六章;
import java.util.*;
public class 练习一 {
	public static void main(String[] args) {
		LinkedList<String> Link = new LinkedList<String>();
		LinkedList<String> Link2 = new LinkedList<String>();
		Link.add("stu1");
		Link.add("stu2");
		Link.add("stu3");
		Link.add("stu4");
		Link2.add("teacher1");
		System.out.println(Link.toString());
		Link.subList(1,3);
		Link.set(1,"stu4");
		System.out.println(Link.toString());
	}


}

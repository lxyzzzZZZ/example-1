//1��	��дһ����Example02
//2��	�����ж�������list���ϣ���������һ���������������
//3��	�� subList(int fromIndex, int toIndex)������ȡ���ϵ�һ����
//4��	��set(int index, E element)�����޸�һ��Ԫ��
//5��	��add(int index, E element)��������һ��Ԫ��
package ������;
import java.util.*;
public class ��ϰһ {
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

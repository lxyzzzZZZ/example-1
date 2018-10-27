package 第五章;

public class 练习三 {
	public static void main(String[] args) {
		StringBuffer sb = new StringBuffer("abcdef");
		sb.replace(1,3,"qq");
		System.out.println("替换指定位置字符串结果:" + sb);;
		System.out.println("翻转：" + sb.reverse());
		sb.delete(1,5);
		System.out.println("截取:" + sb);
	}
}

package 第七章;
import java.io.*;
public class l练习2 {
	public static void main (String[] args) throws Exception{
		FileOutputStream out = new FileOutputStream("example.txt");
		String str = "我在码代码";
		byte[] b = str.getBytes();
		for(int i = 0; i < b.length; i++) {
			out.write(b[i]);
		}
		out.close();
	}
}






















//1)	编写Example02类。
//2)	在main()方法中，通过FileOutputStream(String name)构造方法创建文件输出字节流对象，并指定写入的文件路径。
//3)	定义一段字符串，并将它转换成byte数组，然后通过write(byte[] b)方法，将byte数组写入到文件输出流中。
//4)	使用FileOutputStream类的close()方法，关闭流资源。
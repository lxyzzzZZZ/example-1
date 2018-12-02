package 第七章;
import java.io.*;
public class 练习1 {
	public static void main (String[] args) throws Exception{
		FileInputStream in = new FileInputStream("fis.txt");
		int b = 0;
		while(true) {
			b = in.read();
			if(b == -1) {
				break;
			}
			System.out.println(b);
		}
		in.close();
	}

}

















//设计思路
//1)	在项目目录下创建一个文本文件fis.txt，在文件中编辑内容“Welcome to learn IO stream!”。
//2)	在项目中创建一个名称为Example01的类。
//3)	在main()方法中，通过FileInputStream(String name)构造方法创建文件输入字节流对象，并指定待读取文件fis.txt的路径。
//4)	在while循环条件中使用read()方法每次读取一个字节，同时在循环体中打印每次读取的数据，当read()方法返回值为-1时表示读取到文件结尾，循环结束。
//5)	使用close()方法，关闭流资源。
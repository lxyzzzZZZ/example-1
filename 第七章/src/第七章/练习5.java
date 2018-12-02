package 第七章;
import java.io.*;
public class 练习5 {
	public static void main (String[] args) throws Exception{
		FileReader reader = new FileReader("fis.txt");
		int ch;
		while((ch = reader.read()) != -1) {
			System.out.println((char) ch);
		}
		reader.close();
	}
}












//1)	在项目目录下创建一个文本文件fr.txt，在文件中输入内容“Welcome to learn IO stream!”。
//2)	在项目中创建Example06.java文件，编写Example06类。
//3)	在main()方法中，通过FileReader(String fileName)构造方法创建字符输入流对象，并指定待读取文件fr.txt的路径。
//4)	使用read()方法循环读取并输出数据，当方法返回值为-1时表示读取到文件结尾，循环结束。
//5)	使用close()方法，关闭流资源。
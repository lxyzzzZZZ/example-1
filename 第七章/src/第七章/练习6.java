package 第七章;
import java.io.*;
public class 练习6 {
	public static void main(String[] args) throws Exception{
		FileReader reader = new FileReader("fis.txt");
		BufferedReader br = new BufferedReader(reader);
		FileWriter writer = new FileWriter("wfis.txt");
		BufferedWriter bw = new BufferedWriter(writer);
		String str;
		while((str = br.readLine()) != null) {
			bw.write(str);
			bw.newLine();
		}
		br.close();
		bw.close();
	}
}
















//1)	编写Example07类。
//2)	在main方法中，通过FileWriter(String fileName)构造方法创建字符输出流对象，并指定写入的文件路径。
//3)	通过write()方法将一段字符串直接写入到文件。
//4)	调用close()方法，关闭流资源。

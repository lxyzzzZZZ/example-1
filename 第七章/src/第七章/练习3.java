package 第七章;
import java.io.*;
public class 练习3 {
	public static void main (String[] args) throws Exception{
		InputStream in = new FileInputStream("source\\城南谣.mp3");
		OutputStream out = new FileOutputStream("target\\城南谣.mp3");
		int len;
		long begintime = System.currentTimeMillis();
		while((len = in.read()) != -1) {
			out.write(len);
		}
		long endtime = System.currentTimeMillis();
		System.out.println("拷贝文件所耗的时间为：" + (
				endtime - begintime) + "毫秒");
		in.close();
		out.close();
	}
}

























//1)	在当前项目中创建source和target文件夹，并在source文件夹中存放一个名称为“小水果.mp3”的文件。
//2)	编写Example04类。
//3)	在main()方法中，分别创建文件字符输出流和文件字符输入流对象，并指定文件拷贝的源及目标路径。
//4)	自定义一个1024长度的字节数组作为缓冲区，然后通过输入流将源文件数据读取到缓冲区中，输出流再将缓冲区中数据写入到目标文件中，循环往复直到文件拷贝结束，并计算拷贝文件总耗时。
//5)	使用close()方法，关闭流资源。
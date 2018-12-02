package 第七章;
import java.io.*;
public class 练习4 {
	public static void mian (String[] args) throws Exception{
		InputStream in = new FileInputStream("source\\单车.mp3");
		OutputStream out = new FileOutputStream("target\\单车.mp3");
		byte[] buff = new byte[1024];
		int len;
		long begintime = System.currentTimeMillis();
		while((len = in.read()) != -1) {
			out.write(buff, 0, len);
		}
		long endtime = System.currentTimeMillis();
		System.out.println("拷贝文件所耗的时间为：" + (
				endtime - begintime) + "毫秒");
		in.close();
		out.close();
	}
}


















//1)	在source目录下存放“小水果.mp3”文件，并确保target目录下没有相同名称的文件。
//2)	编写Example05类。在main()方法中，分别创建缓冲字节输出流和缓冲字节输入流对象，并指定拷贝文件的源及目标路径。
//3)	定义一个字节数组作为缓冲区，缓冲输入流将源文件数据读取到缓冲区中，然后缓冲输出流将缓冲区中数据写入到目标文件中，循环往复直到文件拷贝结束，并计算拷贝文件总耗时。
//4)	使用close()方法，关闭流资源。
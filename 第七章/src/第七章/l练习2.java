package ������;
import java.io.*;
public class l��ϰ2 {
	public static void main (String[] args) throws Exception{
		FileOutputStream out = new FileOutputStream("example.txt");
		String str = "���������";
		byte[] b = str.getBytes();
		for(int i = 0; i < b.length; i++) {
			out.write(b[i]);
		}
		out.close();
	}
}






















//1)	��дExample02�ࡣ
//2)	��main()�����У�ͨ��FileOutputStream(String name)���췽�������ļ�����ֽ������󣬲�ָ��д����ļ�·����
//3)	����һ���ַ�����������ת����byte���飬Ȼ��ͨ��write(byte[] b)��������byte����д�뵽�ļ�������С�
//4)	ʹ��FileOutputStream���close()�������ر�����Դ��
package ������;
import java.io.*;
public class ��ϰ3 {
	public static void main (String[] args) throws Exception{
		InputStream in = new FileInputStream("source\\����ҥ.mp3");
		OutputStream out = new FileOutputStream("target\\����ҥ.mp3");
		int len;
		long begintime = System.currentTimeMillis();
		while((len = in.read()) != -1) {
			out.write(len);
		}
		long endtime = System.currentTimeMillis();
		System.out.println("�����ļ����ĵ�ʱ��Ϊ��" + (
				endtime - begintime) + "����");
		in.close();
		out.close();
	}
}

























//1)	�ڵ�ǰ��Ŀ�д���source��target�ļ��У�����source�ļ����д��һ������Ϊ��Сˮ��.mp3�����ļ���
//2)	��дExample04�ࡣ
//3)	��main()�����У��ֱ𴴽��ļ��ַ���������ļ��ַ����������󣬲�ָ���ļ�������Դ��Ŀ��·����
//4)	�Զ���һ��1024���ȵ��ֽ�������Ϊ��������Ȼ��ͨ����������Դ�ļ����ݶ�ȡ���������У�������ٽ�������������д�뵽Ŀ���ļ��У�ѭ������ֱ���ļ����������������㿽���ļ��ܺ�ʱ��
//5)	ʹ��close()�������ر�����Դ��
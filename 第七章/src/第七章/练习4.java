package ������;
import java.io.*;
public class ��ϰ4 {
	public static void mian (String[] args) throws Exception{
		InputStream in = new FileInputStream("source\\����.mp3");
		OutputStream out = new FileOutputStream("target\\����.mp3");
		byte[] buff = new byte[1024];
		int len;
		long begintime = System.currentTimeMillis();
		while((len = in.read()) != -1) {
			out.write(buff, 0, len);
		}
		long endtime = System.currentTimeMillis();
		System.out.println("�����ļ����ĵ�ʱ��Ϊ��" + (
				endtime - begintime) + "����");
		in.close();
		out.close();
	}
}


















//1)	��sourceĿ¼�´�š�Сˮ��.mp3���ļ�����ȷ��targetĿ¼��û����ͬ���Ƶ��ļ���
//2)	��дExample05�ࡣ��main()�����У��ֱ𴴽������ֽ�������ͻ����ֽ����������󣬲�ָ�������ļ���Դ��Ŀ��·����
//3)	����һ���ֽ�������Ϊ��������������������Դ�ļ����ݶ�ȡ���������У�Ȼ�󻺳��������������������д�뵽Ŀ���ļ��У�ѭ������ֱ���ļ����������������㿽���ļ��ܺ�ʱ��
//4)	ʹ��close()�������ر�����Դ��
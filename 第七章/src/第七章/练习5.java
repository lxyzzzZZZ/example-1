package ������;
import java.io.*;
public class ��ϰ5 {
	public static void main (String[] args) throws Exception{
		FileReader reader = new FileReader("fis.txt");
		int ch;
		while((ch = reader.read()) != -1) {
			System.out.println((char) ch);
		}
		reader.close();
	}
}












//1)	����ĿĿ¼�´���һ���ı��ļ�fr.txt�����ļ����������ݡ�Welcome to learn IO stream!����
//2)	����Ŀ�д���Example06.java�ļ�����дExample06�ࡣ
//3)	��main()�����У�ͨ��FileReader(String fileName)���췽�������ַ����������󣬲�ָ������ȡ�ļ�fr.txt��·����
//4)	ʹ��read()����ѭ����ȡ��������ݣ�����������ֵΪ-1ʱ��ʾ��ȡ���ļ���β��ѭ��������
//5)	ʹ��close()�������ر�����Դ��
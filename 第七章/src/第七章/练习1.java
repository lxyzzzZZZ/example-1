package ������;
import java.io.*;
public class ��ϰ1 {
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

















//���˼·
//1)	����ĿĿ¼�´���һ���ı��ļ�fis.txt�����ļ��б༭���ݡ�Welcome to learn IO stream!����
//2)	����Ŀ�д���һ������ΪExample01���ࡣ
//3)	��main()�����У�ͨ��FileInputStream(String name)���췽�������ļ������ֽ������󣬲�ָ������ȡ�ļ�fis.txt��·����
//4)	��whileѭ��������ʹ��read()����ÿ�ζ�ȡһ���ֽڣ�ͬʱ��ѭ�����д�ӡÿ�ζ�ȡ�����ݣ���read()��������ֵΪ-1ʱ��ʾ��ȡ���ļ���β��ѭ��������
//5)	ʹ��close()�������ر�����Դ��
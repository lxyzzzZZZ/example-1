package ������;
import java.io.*;
public class ��ϰ6 {
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
















//1)	��дExample07�ࡣ
//2)	��main�����У�ͨ��FileWriter(String fileName)���췽�������ַ���������󣬲�ָ��д����ļ�·����
//3)	ͨ��write()������һ���ַ���ֱ��д�뵽�ļ���
//4)	����close()�������ر�����Դ��

package ������;
import java.util.Random;
public class ��ϰ�� {
	public static void main(String[] args) {
		Random r = new Random();
		for(int x = 0;x < 10; x++) {
			System.out.println(r.nextInt());
		}
		for(int x = 0;x < 10; x++) {
			System.out.println(r.nextInt(10));
		}
	}
}

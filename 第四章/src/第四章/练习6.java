package ������;
interface Animal{
	void sleep();
}
class Cat implements Animal{
	public void sleep() {
		System.out.println("����˯");
	}
}
class CatMouse implements Animal{
	public void sleep() {
		System.out.println("˯��ץ����");
	}
}
public class ��ϰ6 {
	public static void main(String[] args) {
		Animal an1 = new Cat();
		Animal an2 = new CatMouse();
		animalSleep(an1);
		animalSleep(an2);
	}
		public static void animalSleep(Animal an) {
			an.sleep();
		}
	}












//��ϰ4-6  ��̬������
//���˼·
//1����дAnimal�ӿڣ��ӿ��ж���sleep()������
//2��Cat��ʵ��Animal�ӿڵķ�������������һ������catchMouse()
//3����д������Example12��ʹCat����ָ����Animal������ ����ͨ�������õ���sleep()������
package ������;

public class Example01 {
	public static void main(String[] args) {
		Student s1 = new Student();
		s1.name = "����";
		s1.age = 19;
		s1.speak();
		Student s2 = new Student();
		s2.name = "����";
		s2.age = 20;
		s2.speak();
		Student s3 = new Student();
		s3=s2;
		s3.speak();
	}

}
//1����дExample01��
//2����main()�����У�����Student��ĵ�һ�����������ñ���Ϊs1��ʹ��s1����name��age�����ֱ�Ϊ���Ǹ�ֵΪ���������͡�19����Ȼ�����speak()������
//3������Student��ĵڶ������������ñ���Ϊs2��ʹ��s2�ֱ�Ϊname��age��ֵΪ�����ġ��͡�20����Ȼ�����speak()������
//4������Student��ĵ��������������ñ���Ϊs3����s2��ֵ����s3��Ȼ��ʹ��s3����speak()������
package ������;
class MyException extends Exception{
	public MyException() {
		super();
	}
	public MyException(String message) {
		super(message);
	}
}
public class ��ϰ7 {
	public static void main(String[] args){
		try {
			int result = divide(4,0);
			System.out.println(result);
		}catch(MyException e) {
			System.out.println(e.getMessage());
		}
	}

	private static int divide(int x, int y) throws MyException{
		if(y==0) {
			throw new MyException("������0");
		}
		int result = x/y;
		return result;
	}
}









//��ϰ4-7  �Զ����쳣
//���˼·
//1���Զ�����ΪMyException���쳣�࣬�̳���Exception�ࡣ
//2����Example19���н��г������㣬�жϵ�����Ϊ��ʱ���׳��Զ�����쳣��
//3����main()�����д����쳣��
package 第四章;
class MyException extends Exception{
	public MyException() {
		super();
	}
	public MyException(String message) {
		super(message);
	}
}
public class 练习7 {
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
			throw new MyException("除数是0");
		}
		int result = x/y;
		return result;
	}
}









//练习4-7  自定义异常
//设计思路
//1）自定义名为MyException的异常类，继承自Exception类。
//2）在Example19类中进行除法运算，判断当除数为零时，抛出自定义的异常类
//3）在main()方法中处理异常。
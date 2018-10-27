package 第五章;

public class 练习二 {
	public static void main(String[] args) {
		String s = "itcase";
		System.out.println("将case替换成esac:" + s.replace("case","esac" ));
		String s1 = "  it case  ";
		System.out.println("去除字符串两端空格后的结果:" + s1.trim());
		System.out.println("去除字符串全部空格后的结果:" + s1.replace(" ",""));
	}
}

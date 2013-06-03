import java.util.Scanner;

class figure{
	double area;
	final double PI=3.141592;
	int a,c,t1,t2,T1,T2,T3;
	Scanner sc=new Scanner(System.in);
	figure(){
	area=0.0;
	}
	void Circle(){
		System.out.print("반지름 : ");
		c=sc.nextInt();
		area=(c*c)*PI;
		output();
	}
	void Triangle(){
		System.out.print("밑변 : ");
		t1=sc.nextInt();
		System.out.print("높이 : ");
		t2=sc.nextInt();
		area=(t1*t2)/2;
		output();
	}
	void Trapezoid(){
		System.out.print("아랫변 : ");
		T1=sc.nextInt();
		System.out.print("윗변 : ");
		T2=sc.nextInt();
		System.out.print("높이 : ");
		T3=sc.nextInt();
		area=((T1+T2)*T3)/2;
		output();
	}
	void output(){
		System.out.println("넓이 : "+area);
	}
	void menu(){
	System.out.println("********도형선택********");
	System.out.println("1. 삼각형\n2. 원\n3. 사다리꼴\n4. 종료");
	System.out.print("-------------->선택 : ");
	a=sc.nextInt();

		switch(a){
		case 1 : Triangle(); break;
		case 2 : Circle(); break;
		case 3 : Trapezoid(); break;
		case 4 : System.exit(0);
		}
	}
}
class Java0506_5{
	public static void main(String[] args){
		figure f1=new figure();
		f1.menu();
	}
}

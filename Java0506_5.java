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
		System.out.print("������ : ");
		c=sc.nextInt();
		area=(c*c)*PI;
		output();
	}
	void Triangle(){
		System.out.print("�غ� : ");
		t1=sc.nextInt();
		System.out.print("���� : ");
		t2=sc.nextInt();
		area=(t1*t2)/2;
		output();
	}
	void Trapezoid(){
		System.out.print("�Ʒ��� : ");
		T1=sc.nextInt();
		System.out.print("���� : ");
		T2=sc.nextInt();
		System.out.print("���� : ");
		T3=sc.nextInt();
		area=((T1+T2)*T3)/2;
		output();
	}
	void output(){
		System.out.println("���� : "+area);
	}
	void menu(){
	System.out.println("********��������********");
	System.out.println("1. �ﰢ��\n2. ��\n3. ��ٸ���\n4. ����");
	System.out.print("-------------->���� : ");
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

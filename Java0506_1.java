import java.util.Scanner;

class gsu{
	int a, b;
	gsu(){
	}
	void input(){
	Scanner sc=new Scanner(System.in);
	System.out.print("�ΰ��� ������ �Է��� �ּ��� : ");
	a=sc.nextInt();
	b=sc.nextInt();
	}
	void  solve(){
		int cnt = 1;
		int total = 0;
			
		for(int i=1;i<1000;i++){
		
			if((i%a == 0) && (i%b== 0)){
			System.out.println(cnt + "��° ����� : " + i);
     
			cnt++;
			total+=i;
			
			}
		}
		System.out.println("��������� �� : "+total);
	}
}

class Java0506_1{
	public static void main(String[] args){
		gsu su1=new gsu();
		su1.input();
		su1.solve();
	}
}

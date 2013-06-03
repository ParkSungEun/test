import java.util.Scanner;

class gsu{
	int a, b;
	gsu(){
	}
	void input(){
	Scanner sc=new Scanner(System.in);
	System.out.print("두개의 정수를 입력해 주세요 : ");
	a=sc.nextInt();
	b=sc.nextInt();
	}
	void  solve(){
		int cnt = 1;
		int total = 0;
			
		for(int i=1;i<1000;i++){
		
			if((i%a == 0) && (i%b== 0)){
			System.out.println(cnt + "번째 공배수 : " + i);
     
			cnt++;
			total+=i;
			
			}
		}
		System.out.println("공배수들의 합 : "+total);
	}
}

class Java0506_1{
	public static void main(String[] args){
		gsu su1=new gsu();
		su1.input();
		su1.solve();
	}
}

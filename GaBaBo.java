import java.util.*;
class GaBaBo {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
			int w=0;
			int l=0;
			int s=0;
			System.out.println("�ȳ��Ͻʴϱ� ���� ���� �� ���� �Դϴ�.");
			String flag="y"; 
			System.out.print("������ ���ðڽ��ϱ�?   ");
			do{
				System.out.print("1:����, 2:����, 3:��   :   ");
				int a=sc.nextInt();
				if(a==1) System.out.print("����� : ����,  ");
				else if(a==2) System.out.print("����� : ����,  ");
				else if(a==3) System.out.print("����� : ��,  ");
				int b=(int)(Math.random()*3)+1;
				if(b==1) System.out.println("���� : ���� ");
				else if(b==2) System.out.println("���� : ���� ");
				else if(b==3) System.out.println("���� : �� ");
				
				switch(a){
					case 1: switch(b){
								case 1:System.out.println("*** �����ϴ�. �ٽ��ѹ������ϼ���"); s++;break;
								case 2:System.out.println("*** ��θ�.. �����ϴ�. ***");	l++; break;
								case 3:System.out.println("*** ¦¦¦ ��ī��ī �̰���ϴ� ***"); w++;	break;
							 }break;
					case 2: switch(b){
								case 1:System.out.println("*** ¦¦¦ ��ī��ī �̰���ϴ� ***"); w++; break;
								case 2:System.out.println("*** �����ϴ�. �ٽ��ѹ������ϼ���"); l++; break;
								case 3:System.out.println("*** ��θ�.. �����ϴ�. ***"); break;
							 }break;
					case 3: switch(b){
								case 1:System.out.println("*** ��θ�.. �����ϴ�. ***"); s++; break;
								case 2:System.out.println("*** ¦¦¦ ��ī��ī �̰���ϴ� ***"); w++; break;
								case 3:System.out.println("*** �����ϴ�. �ٽ��ѹ������ϼ���"); l++; break;
							 }break;
				}
				
				System.out.print("�ٽ� �Ͻðڽ��ϱ�? (y/n) : ");
				flag=sc.next();
				System.out.println();
			}while(flag.equals("y"));
			System.out.println(w+"�� �̱��, "+s+"�� ����, "+l+"�� �����ϴ�.");
			System.out.println("���� ����.\n");
	}
}
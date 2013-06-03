import java.util.*;
class GaBaBo {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
			int w=0;
			int l=0;
			int s=0;
			System.out.println("안녕하십니까 가위 바위 보 게임 입니다.");
			String flag="y"; 
			System.out.print("무엇을 내시겠습니까?   ");
			do{
				System.out.print("1:가위, 2:바위, 3:보   :   ");
				int a=sc.nextInt();
				if(a==1) System.out.print("사용자 : 가위,  ");
				else if(a==2) System.out.print("사용자 : 바위,  ");
				else if(a==3) System.out.print("사용자 : 보,  ");
				int b=(int)(Math.random()*3)+1;
				if(b==1) System.out.println("상대방 : 가위 ");
				else if(b==2) System.out.println("상대방 : 바위 ");
				else if(b==3) System.out.println("상대방 : 보 ");
				
				switch(a){
					case 1: switch(b){
								case 1:System.out.println("*** 비겼습니다. 다시한번도전하세용"); s++;break;
								case 2:System.out.println("*** 띠로리.. 졌습니다. ***");	l++; break;
								case 3:System.out.println("*** 짝짝짝 츄카츄카 이겼습니다 ***"); w++;	break;
							 }break;
					case 2: switch(b){
								case 1:System.out.println("*** 짝짝짝 츄카츄카 이겼습니다 ***"); w++; break;
								case 2:System.out.println("*** 비겼습니다. 다시한번도전하세용"); l++; break;
								case 3:System.out.println("*** 띠로리.. 졌습니다. ***"); break;
							 }break;
					case 3: switch(b){
								case 1:System.out.println("*** 띠로리.. 졌습니다. ***"); s++; break;
								case 2:System.out.println("*** 짝짝짝 츄카츄카 이겼습니다 ***"); w++; break;
								case 3:System.out.println("*** 비겼습니다. 다시한번도전하세용"); l++; break;
							 }break;
				}
				
				System.out.print("다시 하시겠습니까? (y/n) : ");
				flag=sc.next();
				System.out.println();
			}while(flag.equals("y"));
			System.out.println(w+"번 이기고, "+s+"번 비기고, "+l+"번 졌습니다.");
			System.out.println("게임 종료.\n");
	}
}
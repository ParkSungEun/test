import java.util.Scanner;
class Account{
String accId;
String name;
long balance;
Account(){
}
Account(String name){
this.name=name;
}
Account(String accId, long balance){
this.accId=accId;
this.balance=balance;
}
void withdraw(long money){	
if(money>0) balance-=money;
else System.out.println("금액은 0원 이상을 입력해주세요");
}
void deposit(long money){
if(money>0) balance+=money;
else System.out.println("금액은 0원 이상을 입력해주세요");
}
long getBalance(){
System.out.println("★☆잔여금액은 "+balance+"원 입니다★☆");
return balance;
}
}
class Bank{
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.print("이름을 입력하세요=> ");
	Account p=new Account(sc.next());
	System.out.println("\n*******"+p.name+"님 환영합니다*******");
	System.out.print("=================================\n입금을 원하시면 1번\n출금을 원하시면 2번\n잔여금액을 확인하시려면 3번\n종료를 원하시면 4번을 입력하세요=> ");
	int a=sc.nextInt();
	System.out.println("=================================");
	while(a!=4){
	switch(a){
	case 1: System.out.print("입급할 금액을 입력해주세요=> ");
	p.deposit(sc.nextLong()); break;
	case 2:	System.out.print("출금할 금액을 입력해주세요=> ");
	int m=sc.nextInt();
	if(p.balance-m>0) p.withdraw(m);
	else System.out.println("잔액이 부족해서 출금이 불가능합니다."); break;
	case 3:	p.getBalance(); break;
	default : System.out.println("잘못입력하셨습니다.");
}//sw
System.out.print("=================================\n입금을 원하시면 1번\n출금을 원하시면 2번\n잔여금액을 확인하시려면 3번\n종료를 원하시면 4번을 입력하세요=> ");
a=sc.nextInt();
System.out.println("=================================");
}//wh
System.out.println("\n*******이용해 주셔서 감사합니다*******");
}//main
}//class
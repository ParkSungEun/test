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
else System.out.println("�ݾ��� 0�� �̻��� �Է����ּ���");
}
void deposit(long money){
if(money>0) balance+=money;
else System.out.println("�ݾ��� 0�� �̻��� �Է����ּ���");
}
long getBalance(){
System.out.println("�ڡ��ܿ��ݾ��� "+balance+"�� �Դϴ١ڡ�");
return balance;
}
}
class Bank{
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
System.out.print("�̸��� �Է��ϼ���=> ");
	Account p=new Account(sc.next());
	System.out.println("\n*******"+p.name+"�� ȯ���մϴ�*******");
	System.out.print("=================================\n�Ա��� ���Ͻø� 1��\n����� ���Ͻø� 2��\n�ܿ��ݾ��� Ȯ���Ͻ÷��� 3��\n���Ḧ ���Ͻø� 4���� �Է��ϼ���=> ");
	int a=sc.nextInt();
	System.out.println("=================================");
	while(a!=4){
	switch(a){
	case 1: System.out.print("�Ա��� �ݾ��� �Է����ּ���=> ");
	p.deposit(sc.nextLong()); break;
	case 2:	System.out.print("����� �ݾ��� �Է����ּ���=> ");
	int m=sc.nextInt();
	if(p.balance-m>0) p.withdraw(m);
	else System.out.println("�ܾ��� �����ؼ� ����� �Ұ����մϴ�."); break;
	case 3:	p.getBalance(); break;
	default : System.out.println("�߸��Է��ϼ̽��ϴ�.");
}//sw
System.out.print("=================================\n�Ա��� ���Ͻø� 1��\n����� ���Ͻø� 2��\n�ܿ��ݾ��� Ȯ���Ͻ÷��� 3��\n���Ḧ ���Ͻø� 4���� �Է��ϼ���=> ");
a=sc.nextInt();
System.out.println("=================================");
}//wh
System.out.println("\n*******�̿��� �ּż� �����մϴ�*******");
}//main
}//class
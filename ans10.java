import java.util.*;
class  ans10{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("��ǥ��ü�߰�����");
		System.out.println("���� : ǥ��ü�� = (����-100)*0.9");
		System.out.println("���� : ǥ��ü�� = (����-100)*0.85");
		System.out.println("�񸸵� = ����ü��(kg)/ǥ��ü��(kg)*100");
		System.out.println("----------------------------------------------------------");
		System.out.println("***** �񸸵� Check *****");
		System.out.print("����(M/F) : ");
		String a=sc.next();
		System.out.print("����(Cm) : ");
		double b=sc.nextDouble();
		System.out.print("ü��(Kg) : ");
		double c=sc.nextDouble();
		System.out.println();
		System.out.println("���� - "+a);
		System.out.println("���� - "+b+"Cm");
		System.out.println("ü�� - "+c+"Kg");
		System.out.println();
		double d=0;
		double e=0;

		if(a.equals("M")||a.equals("m")){	
			d=(b-100)*0.9;//ǥ��ü��
			e=c/d*100;
			e=(double)((int)(e*100))/100;
		}

		else if(a.equals("F")||a.equals("f")){
			d=(b-100)*0.85;//ǥ��ü��
			e=c/d*100;
			e=(double)((int)(e*100))/100;
		}

		if(e<=90){
			System.out.println("����� �񸸵��� "+e+"%�̰�, ��ü���Դϴ�.");
		}
		else if(e>=91&&e<=110){
			System.out.println("����� �񸸵��� "+e+"%�̰�, ����(ǥ��ü��)�Դϴ�.");
		}
		else if(e<=111&&e<=120){
			System.out.println("����� �񸸵��� "+e+"%�̰�, ��ü���Դϴ�.");
		}
		else if(e<=121&&e<=130){
			System.out.println("����� �񸸵��� "+e+"%�̰�, �浵���Դϴ�.");
		}
		else if(e<=131&&e<=150){
			System.out.println("����� �񸸵��� "+e+"%�̰�, �ߵ����Դϴ�.");
		}
		else if(e>150){
			System.out.println("����� �񸸵��� "+e+"%�̰�, �����Դϴ�.");
		}
		System.out.println();
	}
}
import java.util.*;
class  ans10{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("★표준체중계산법★");
		System.out.println("남성 : 표준체중 = (신장-100)*0.9");
		System.out.println("여성 : 표준체중 = (신장-100)*0.85");
		System.out.println("비만도 = 현재체중(kg)/표준체중(kg)*100");
		System.out.println("----------------------------------------------------------");
		System.out.println("***** 비만도 Check *****");
		System.out.print("성별(M/F) : ");
		String a=sc.next();
		System.out.print("신장(Cm) : ");
		double b=sc.nextDouble();
		System.out.print("체중(Kg) : ");
		double c=sc.nextDouble();
		System.out.println();
		System.out.println("성별 - "+a);
		System.out.println("신장 - "+b+"Cm");
		System.out.println("체중 - "+c+"Kg");
		System.out.println();
		double d=0;
		double e=0;

		if(a.equals("M")||a.equals("m")){	
			d=(b-100)*0.9;//표준체중
			e=c/d*100;
			e=(double)((int)(e*100))/100;
		}

		else if(a.equals("F")||a.equals("f")){
			d=(b-100)*0.85;//표준체중
			e=c/d*100;
			e=(double)((int)(e*100))/100;
		}

		if(e<=90){
			System.out.println("당신의 비만도는 "+e+"%이고, 저체중입니다.");
		}
		else if(e>=91&&e<=110){
			System.out.println("당신의 비만도는 "+e+"%이고, 정상(표준체중)입니다.");
		}
		else if(e<=111&&e<=120){
			System.out.println("당신의 비만도는 "+e+"%이고, 과체중입니다.");
		}
		else if(e<=121&&e<=130){
			System.out.println("당신의 비만도는 "+e+"%이고, 경도비만입니다.");
		}
		else if(e<=131&&e<=150){
			System.out.println("당신의 비만도는 "+e+"%이고, 중도비만입니다.");
		}
		else if(e>150){
			System.out.println("당신의 비만도는 "+e+"%이고, 고도비만입니다.");
		}
		System.out.println();
	}
}
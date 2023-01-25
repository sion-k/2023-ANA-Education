import java.util.Scanner;
public class Ajin {
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int TestCase = sc.nextInt();
        
        for (int i=1; i<TestCase; i++){
int[] NMK= new int[3];
        for (int c=0;c<3;c++)
        {NMK[c]=sc.nextInt();}
int[] chart= new int[NMK[0]];
        for (int d=0; d<NMK[0];d++)
        {chart[d]=sc.nextInt();}
        int targetPrice= chart[NMK[2]-1]+ NMK[1];
        for (int e=NMK[2];e<NMK[0] ;e++){
//새로운 배열을 형성해서 타깃프라이스보다 큰 e+1을 저장하고 맨 앞 e+1만 출력해
            int [] arr= new int[NMK[0]];
            if (chart[e]>targetPrice) {
            arr[e-NMK[2]]=e+1;	}
            //arr[0]= null이면 존버를 출력해
            if (arr.length != 0){
                System.out.println(arr[0]);
              }
            else if (arr.length == 0)
            {System.out.print("JB");}
            //배열 요소들 중에 해당하는 값이 하나도 없을 때에만 존버 한번만 출력필요
        }
           }   
        }
    }

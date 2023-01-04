import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder bw = new StringBuilder();

        int tc = Integer.parseInt(br.readLine());

        while (tc-- > 0) {
            int n = Integer.parseInt(br.readLine());
            
            int[] a = new int[n];
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(st.nextToken());
            }

            for (int i = n - 2; i >= 0; i--) {
                while (a[i] > a[i + 1]) {
                    a[i] = a[i] / 2;
                }
            }

            for (int i = 0; i < n; i++) {
                bw.append(a[i]);
                if (i != n - 1) {
                    bw.append(" ");
                }
            }

            bw.append("\n");
        }

        System.out.print(bw);
    }

}

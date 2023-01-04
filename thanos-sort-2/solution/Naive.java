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

            while (true) {
                int j = -1;

                for (int i = 0; i < n - 1; i++) {
                    if (a[i] > a[i + 1]) {
                        j = i;
                        break;
                    }
                }

                if (j != -1) {
                    a[j] = a[j] / 2;
                } else {
                    break;
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

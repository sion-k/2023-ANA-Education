import java.util.*;
import java.io.*;

public class Java {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder bw = new StringBuilder();

        int TC = Integer.parseInt(br.readLine());

        while (TC-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());

            String s = br.readLine();
            
            int[] p = new int[n];
            for (int i = 0; i < n; i++) {
                p[i] += s.charAt(i) == 'm' ? 1 : 0;

                if (i - 1 >= 0) {
                    p[i] += p[i - 1];
                }
            }

            int cnt = 0;

            for (int i = 0; i < m; i++) {
                st = new StringTokenizer(br.readLine(), " ");
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                a--; b--;

                int sum = p[b];
                if (a - 1 >= 0) {
                    sum -= p[a - 1];
                }

                boolean flag = b - a + 1 >= 3 && s.charAt(a) == 'U' && sum == b - a;

                if (flag) {
                    cnt++;
                }
            }

            bw.append(cnt);
            bw.append("\n");
        }
        
        System.out.print(bw);
    }

}

import java.util.*;
import java.io.*;

public class Java {
    static final int MOD = 1000000007;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
        int n = Integer.parseInt(br.readLine());
        long[] b = new long[n];

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        for (int i = 0; i < n; i++) {
            b[i] = Integer.parseInt(st.nextToken());
        }
        
        for (int i = 1; i < n; i++) {
            b[i] += b[i - 1];
        }
    
        int m = Integer.parseInt(br.readLine());
        int[] q = new int[m];

        st = new StringTokenizer(br.readLine(), " ");
        for (int i = 0; i < m; i++) {
            q[i] = Integer.parseInt(st.nextToken());
        }

        int sum = 0;

        for (int i = 0; i < m; i++) {
            q[i] = (int)((q[i] - 1) % b[n - 1] + 1);

            int lo = -1, hi = n - 1;

            while (lo + 1 < hi) {
                int mid = (lo + hi) / 2;

                if (b[mid] >= q[i]) {
                    hi = mid;
                } else {
                    lo = mid;
                }
            }

            sum = (sum + hi + 1) % MOD;
        }

        System.out.println(sum);
    }

}

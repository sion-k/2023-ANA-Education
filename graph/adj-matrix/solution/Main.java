import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder bw = new StringBuilder();
        // StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        
        int N = 5;
        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            adj.add(new ArrayList<>());
        }

        // (2, 3) 간선을 추가
        adj.get(2).add(3);
        adj.get(3).add(2);
        
        System.out.print(bw);
    }

}

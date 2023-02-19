import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder bw = new StringBuilder();

        Queue<Integer> queue = new LinkedList<>();

        // push 42
        queue.offer(42);

        // pop
        queue.poll();

        // top
        queue.peek();

        // isEmpty
        queue.isEmpty();

    }

}

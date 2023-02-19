import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder bw = new StringBuilder();
        
        Stack<Integer> st = new Stack<>();
        
        // push 42
        st.push(42);

        // pop
        st.pop();

        // top
        st.peek();

        // isEmpty()
        st.isEmpty();
    }

}

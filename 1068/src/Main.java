import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

/**
 * URI 1068.
 *
 * @author Bruno Santos
 */
public class Main {

    public static boolean expIsCorrect(String exp) {

        Stack<Character> s = new Stack<>();
        int size = exp.length();
        for (int i = 0; i < size; i++) {
            char c = exp.charAt(i);
            if (c == '(')
                s.add(c);
            else if (c == ')') {
                if (s.isEmpty())
                    return false;
                else
                    s.pop();
            }
        }
        return s.isEmpty();
    }

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while ((line = br.readLine()) != null) {
            System.out.println((expIsCorrect(line)) ? "correct" : "incorrect");
        }
    }

}

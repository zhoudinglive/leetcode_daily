// 1189_Maximum_Number_of_Balloons
import java.util.Arrays;

class Solution {
    public int maxNumberOfBalloons(String text) {
        int ans = 0;
        int[] text_statistic = new int[5];
        int[] char_map = {1, 1, 2, 2, 1};
        
        for(int i = 0; i < text.length(); ++i) {
            char x = text.charAt(i);
            if(x == 'b') {
                text_statistic[0] += 1;
            } else if(x == 'a') {
                text_statistic[1] += 1;
            } else if(x == 'l') {
                text_statistic[2] += 1;
            } else if(x == 'o') {
                text_statistic[3] += 1;
            } else if(x == 'n') {
                text_statistic[4] += 1;
            } else {
                continue;
            }
        }

        int min = Arrays.stream(text_statistic).min().getAsInt();
        for(int i = 0; i < min; ++i) {
            for(int j = 0; j < 5; ++j) {
                text_statistic[j] -= char_map[j];
                if(text_statistic[j] <= 0) {
                    return ans;
                }
            }
            ans += 1;
        }
        return ans;
    }
}
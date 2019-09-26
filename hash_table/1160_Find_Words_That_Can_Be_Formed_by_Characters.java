// 1160_Find_Words_That_Can_Be_Formed_by_Characters
class Solution {
    public int countCharacters(String[] words, String chars) {
        int[] binary_chars = new int[26];
        for (int i = 0; i < chars.length(); ++i) {
            binary_chars[chars.charAt(i) - 97] = 1;
        }

        int ans = 0;
        for (String w : words) {
            int[] binary_w = new int[26];
            for (int i = 0; i < w.length(); ++i) {
                binary_w[w.charAt(i) - 97] = 1;
            }

            boolean flag = true;
            for (int i = 0; i < 26; ++i) {
                if (binary_chars[i] == 0 && binary_w[i] == 1) {
                    flag = false;
                }
            }

            if (flag) {
                ans += w.length();
            }

        }
        return ans;
    }

    public static void main(String[] args) {
        String[] words = { "cat", "bt", "hat", "tree" };
        String chars = "atach";

        Solution s = new Solution();
        s.countCharacters(words, chars);
    }
}
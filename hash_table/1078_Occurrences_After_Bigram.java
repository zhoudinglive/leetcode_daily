import java.util.Vector;
// 1078_Occurrences_After_Bigram
class Solution {
    public String[] findOcurrences(String text, String first, String second) {
        String[] textArray = text.split(" ");
        
        Vector<String> ansVec = new Vector<String>();
        for(int i = 0; i < textArray.length - 2; ++i) {
            if(textArray[i].equals(first) && textArray[i + 1].equals(second)) {
                ansVec.add(textArray[i + 2]);
            }
        }
        String[] ans = ansVec.toArray(new String[ansVec.size()]);
        return ans;
    }
}
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);

        int beams = 0, onesInRow1 = 0, onesInRow2 = 0;

        for(string b : bank) {
            onesInRow2 = count(b.begin(), b.end(), '1');
            
            beams += onesInRow1 * onesInRow2;

            if(onesInRow2) {
                onesInRow1 = onesInRow2;
                onesInRow2 = 0;
            }
        }

        return beams;
    }
};
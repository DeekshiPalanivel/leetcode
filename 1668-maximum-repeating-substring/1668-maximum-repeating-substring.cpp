class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int m = sequence.size();
        int n = word.size();
        int k = 0;
        int maxi = INT_MIN;

        for(int i=0; i<=m-n; i++)
        {
            if(sequence.substr(i,n)==word)
            {
                k++;
                i+=(n-1);
            }
            else
            {
                if(k)
                {
                    maxi = max(k,maxi);
                    k=0;
                    i-=(n-1);
                }
            }
        }
        return max(k,maxi);

    }
};
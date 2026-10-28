class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n = s.size();
        unordered_map<char,int>mp;
        int maxi=0;
        int st=0;
        int maxfreq =  0;
        for(int ed = 0 ; ed<n; ed++){
           mp[s[ed]]++;
           maxfreq = max(maxfreq,mp[s[ed]]);  //max frequency
            while((ed-st+1) - maxfreq > k){   //if window size - max frequency > k matlab usme diffrent element jada ho gaye hai 
                mp[s[st]]--;     //ham window ko chota karte hai taki sahi ho sake 
                st++;
            }
            maxi = max(maxi,ed-st+1);
        }
        return maxi;
    }
};
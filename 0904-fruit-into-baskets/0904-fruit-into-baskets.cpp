class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int st = 0;
        int n = fruits.size();
        int maxi = 0 ; 
        for(int ed = 0; ed<n; ed++){  //window me max two distinct element ho sakte hai
            mp[fruits[ed]]++;   
            while(mp.size()>2){   //agar window me 2 se jada distinct elementaye toh st++ untill only two left
                mp[fruits[st]]--;  
                if(mp[fruits[st]] == 0){ //map se hatate jao jaise jaise st aage badh raha hai
                  mp.erase(fruits[st]);
              }
                st++;  
            }
            maxi = max(maxi,ed-st+1); //maxi nikalte ja 
        } return maxi;
    }
};
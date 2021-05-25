//link for problem ->  https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/


        int countCharacters(vector<string>& words, string chars) {
        
        int charFreq[26]={0};
        int sum=0;
        for(int i=0;i<chars.length();i++){
            charFreq[chars[i]-'a']++;
        }
        
        for(int i=0;i<words.size();i++){
            
            int temp[26]={0};
            
            for(int j=0;j<words[i].length();j++){
                temp[words[i][j]-'a']++;
            }
            
            bool valid=true;
            
         for(int k=0;k<26;k++){
             if(temp[k]!=0){
                 if(temp[k]<=charFreq[k]){
                     continue;
                 }
                 else{
                     valid=false;
                 }
             }
         }
            if(valid){
                sum+=words[i].length();
            }
            
        }
        
     return sum;   
        
    }
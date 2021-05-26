//link for problem ->  https://leetcode.com/problems/keyboard-row/

    
    bool isFound(string w,string r1,string  r2,string r3){
        
        bool row1=true;
        bool row2=true;
        bool row3=true;
        
        for(int i=0;i<w.length();i++){
           std::size_t found = r1.find(w[i]);
           if (found==std::string::npos){
               row1=false;
               break;
           }
        
            
        }
         
        for(int i=0;i<w.length();i++){
            std::size_t found = r2.find(w[i]);
           if (found==std::string::npos){
               row2=false;
               break;
           }
        
            
        }
         
        for(int i=0;i<w.length();i++){
            std::size_t found = r3.find(w[i]);
           if (found==std::string::npos){
               row3=false;
               break;
           }
        
            
        }
        
        return row1||row2||row3;
        
    }
    
    vector<string> findWords(vector<string>& words) {
        
        string row1="qwertyuiopQWERTYUIOP";
        string row2="asdfghjklASDFGHJKL";
        string row3="zxcvbnmZXCVBNM";
        vector<string> output;
        
        for(int i=0;i<words.size();i++){
            
            bool result = isFound(words[i],row1,row2,row3);
            
            if(result){
            output.push_back(words[i]);
            }
        
        }
    
        return output;
    }
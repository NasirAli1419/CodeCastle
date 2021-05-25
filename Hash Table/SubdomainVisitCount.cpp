//link for problem ->  https://leetcode.com/problems/subdomain-visit-count/

        vector<string> subdomainVisits(vector<string>& cpdomains) {
     
        unordered_map<string,int> grandMap;
        vector<string> output;
        
        for(int i=0;i<cpdomains.size();i++){
            
             int spaceIndex= cpdomains[i].find(" ");  
             int number = stoi(cpdomains[i].substr(0,spaceIndex));
             vector<int> dots;
             dots.push_back(spaceIndex);
             
            for(int j=0;j<cpdomains[i].length();j++){
                if(cpdomains[i][j]=='.')dots.push_back(j);
            }
            
            for(int j=0;j<dots.size();j++){
              
                string s = cpdomains[i].substr(dots[j]+1);
                grandMap[s]+=number;
                
            }
    
        }
        
         for (auto i : grandMap){
          
             string input = to_string(i.second) +" "+i.first;
             output.push_back(input);
         
         }
  
        return output;
    }
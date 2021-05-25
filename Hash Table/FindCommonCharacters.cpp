//link for problem ->  https://leetcode.com/problems/find-common-characters/

vector<string> commonChars(vector<string>& words) {

    vector<string> output;

    int min_frequency[26];

    for(int i=0;i<26;i++){
        min_frequency[i]=INT_MAX;
    }

    for(int i=0;i<words.size();i++){

        int wordArray[26]={0};

        for(int j=0;j<words[i].length();j++){

            wordArray[words[i][j]-'a']++;
        }
        for(int k=0;k<26;k++){
            min_frequency[k] = min(min_frequency[k],wordArray[k]);
        }

    }
    for(int i=0;i<26;i++){


        while(min_frequency[i]>0){

            string s(1, char(i+'a'));

            output.push_back(s);

            min_frequency[i]--;
        }
    }
    return output;

}
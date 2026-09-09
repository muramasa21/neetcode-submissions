class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;
        if(strs.empty()==true){
            return enc;
        }
        for(int i=0;i<strs.size();i++){
            enc+=to_string(strs[i].size());
            enc+='_';
            enc+=strs[i];
        }
        // 5Hello5World
        return enc;
    }

    vector<string> decode(string s) {
        vector <string> dec; 
        if(s.empty()==true)    return dec;
        int k=0; // index of the word we are on in dec
        int size =s.size(); // size of the string we got
        int i=0; // index of the string letter we are on
        while(i<size){
            string st_size;
            while(s[i]!='_'){
                 st_size+=s[i];
                 i++;
            }
            int str_size=std::stoi(st_size);

            i++;
            string tempp;
            for(int j=0;j<str_size;j++){
                tempp.push_back(s[i+j]);
            }
            dec.push_back(tempp);
            i+=str_size;

        }
        return dec;
    }
};

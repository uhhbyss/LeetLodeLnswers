class Solution {
public:
    string decodeMessage(string key, string message) {
        char assign = 'a';
        unordered_map<char,char> decode;
        
        for(char b:key){
            if(decode.count(b) == 0 && assign<='z' && b!=' '){
                decode[b] = assign;
                assign = assign + 1;
            }
        }
        
        decode[' '] = ' ';
        
        
        string output;
        for(char c: message){
            output.push_back(decode[c]);
        }
        
        return output;
        
    }
};
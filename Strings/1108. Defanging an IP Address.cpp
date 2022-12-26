class Solution {
public:
    string defangIPaddr(string address) {
        string left = "[";
        string right = "]";
        for(int i = 0; i< address.length(); i++){
            if(address[i] == '.'){
                address.insert(i,"[");
                address.insert(i+2,"]");
                i+=3;
            }
        }
        return address;
    }
};
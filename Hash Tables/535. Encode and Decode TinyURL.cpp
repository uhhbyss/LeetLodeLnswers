class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        //create a random 6 letter string to use as a key
        //check if it already exists in the hash map
        //if it doesn't place it into the hashmap
        string tiny;
        
        for(int i = 0; i<6; i++){
            tiny.push_back('a' + rand()%26);
        }
        
        tinyURLS[tiny] = longUrl;
        return tiny;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        //fetch the original string from the hashmap using the shortUrl key
        return tinyURLS[shortUrl];
    }
    
private:
    unordered_map<string,string> tinyURLS;
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
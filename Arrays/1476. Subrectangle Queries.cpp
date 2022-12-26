class SubrectangleQueries {
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        main = rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(int currRow = row1; currRow<=row2; currRow++){
            for(int currCol = col1; currCol <= col2; currCol++){
                main[currRow][currCol] = newValue;
            }
        }
    }
    
    int getValue(int row, int col) {
        return main[row][col]; 
    }
    
private: 
    vector<vector<int>> main;
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
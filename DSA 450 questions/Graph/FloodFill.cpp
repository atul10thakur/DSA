 void fillColor(int s, int e , vector<vector<int>>&vis , vector<vector<int>>&image , int rowSize , int colSize ,            int oldColor , int newColor){

    if(s >= rowSize || e >= colSize || s < 0 || e < 0) return ;
    if(oldColor != image[s][e] || vis[s][e]) return;
    
    vis[s][e] = 1;
    image[s][e] = newColor;
        
    fillColor(s+1,e,vis,image,rowSize, colSize,oldColor,newColor);
    fillColor(s-1,e,vis,image,rowSize, colSize,oldColor,newColor);    
    fillColor(s,e+1,vis,image,rowSize, colSize,oldColor,newColor);    
    fillColor(s,e-1,vis,image,rowSize, colSize,oldColor,newColor);   
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int row = image.size();
        int col = image[0].size();
        vector<vector<int>>vis(row , vector<int>(col,0));
        int oldColor = image[sr][sc];
        fillColor(sr,sc,vis,image,row, col,oldColor,newColor);
        return image;
    }
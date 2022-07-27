bool isSafe(int x, int y, vector<vector<bool>>& visited,
            vector<vector<int>>& arr, int n){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] != 1 && arr[x][y] == 1){
        return true;
    }else{
        return false;
    }
}


void solve(int x, int y, vector<vector<int>>& arr, int n, vector<string>& ans,
          vector<vector<bool>>& visited, string path){
    
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    
    // Down Move
    if(isSafe(x+1, y, visited, arr, n)){
        solve(x+1, y, arr, n, ans, visited, path + 'D');
    }
    
    // Left Move
    if(isSafe(x, y-1, visited, arr, n)){
        solve(x, y-1, arr, n, ans, visited, path + 'L');
    }
    
    // Right Move
    if(isSafe(x, y+1, visited, arr, n)){
        solve(x, y+1, arr, n, ans, visited, path + 'R');
    }
    
    // Up Move
    if(isSafe(x-1, y, visited, arr, n)){
        solve(x-1, y, arr, n, ans, visited, path + 'U');
    }
    visited[x][y] = 0;
}


vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    // Write your code here.
    vector<string> ans;
    string path = "";
    vector<vector<bool>> visited(n, vector<bool>(n,0));
    
  // if first index is 0 no movement happen
    if(arr[0][0] == 0){
        return ans;
    }
    
    solve(0, 0, arr, n, ans, visited, path);
    return ans;
}

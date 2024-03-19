int findPattern(string s, string p){
    // code here
    
    
    
    int found = s.find(p);
    while(found!=string::npos){
    return found;
        found = s.find(p, found+1);
    }
}
void utility(int y){
    string isLeap = "False";

    //Your code below
    //Assign True or False to isLeap
    
    //Your code above
    
        if(y%400==0 || y%4==0 & y%100!=0){
       isLeap = "True";
   }



    
    //The line below prints the output
    cout<<isLeap<<endl;
}
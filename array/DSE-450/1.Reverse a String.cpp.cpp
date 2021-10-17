/*Reverse a String
with swap*/

string reverseWord(string str){
    int n= str.size()-1;
  for(int i = 0;i<=(n/2);i++)
    swap(str[i],str[n-i]);
    
    return str;
}
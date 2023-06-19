#include<bits/stdc++.h>
using namespace std;

const int overallvalue=256;         //as maximumvalue of ascii is 256
int main(){
    string str;
    cout<<"enter a string :";
    getline(cin,str);                //here get line is used to read the line of strings 

    vector<int> freq(overallvalue,0);
    for(char ch : str){
        freq [ch]++;
    }

cout<<"frequency of characters :\n";

for(int i=0;i<overallvalue;i++){
    if(freq[i] != 0){
        cout << static_cast<char>(i) << ": " << freq[i] << endl;     /*static_cast is used to convert int value to char
                                                                      here it is used to convert ascii value back to its char*/

    }
}
return 0;
}



//
//  main.cpp
//  Assignment0
//
//  Created by Yashwee Kothari on 1/23/19.
//  Copyright © 2019 Yashwee Kothari. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
   
    bool reverse = false;
    bool upper = false;
    bool noVowel = false;
    string temp;
    
    
    
    for(int i =1; i <argc; i++){
         temp = argv[i];
        int len = temp.length();
        
        
       
        if (len%2 == 0){
            reverse = !reverse;
        }
        
        if (len%3 == 0){
            upper = !upper;
        }
        
        if (len%5 == 0){
            noVowel = !noVowel;
        }
        
        
        string temp2 = temp;
        string reversed;
        
        if (reverse){
            
            for(int letter = temp2.length() -1; letter>-1; letter--){
                reversed += temp2[letter];
                
            }
            temp2 = reversed;
        }
        
        
        if(upper){
            for( int c =0; c< temp2.length(); c++){
                temp2[c] = toupper(temp2[c]);
            }
        }
        
        
        if (noVowel){
            string temp3;
            for( int c =0; c< temp2.length(); c++){
                if (temp2[c] == 'a' || temp2[c] == 'A' || temp2[c] == 'e' || temp2[c] == 'E' || temp2[c] == 'i' || temp2[c] == 'I' || temp2[c] == 'o' || temp2[c] == 'O'|| temp2[c] == 'u' || temp2[c] == 'U'){
                    continue;
                }
               temp3 += temp2[c];
            }
            temp2 = temp3;
           
        }
        
        cout << temp2 << endl;
    
        
      
        
    }
    
    return 0;
}

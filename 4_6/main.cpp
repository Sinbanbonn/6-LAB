#include <iostream>
#include "string"
using namespace std;
int StrLen(string arr) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }
    return i;
}
int main() {
string eng ;
cout << "Enter your text : " ;
getline(cin , eng ) ;
int counter = 0 ;
top:
    counter++ ;
for(int i = 0 ; i < StrLen(eng)  ; i++){
    if(eng[i] == 'W' || eng[i] ==  'X' || eng[i] == 'Q' ||  eng[i] == 'C' )
    {
        eng.erase( i  , 1 ); // Delete symbol №i
    }
    else {
        if(eng[i] == 'c'){
            if(eng[i + 1]== 'e' || eng[i+1]== 'y' || eng[i+1]== 'i')
            {eng[i] = 's' ; }
            else { eng[i] ='k' ; }
        }
        else {
            if( eng[i] ==  'q'){
                if( eng[i +1 ] != 'u'){
                    eng[i] = 'k' ;

                }
                else{ eng[i] = 'k' ;
                eng[i + 1 ] = 'v' ; }

            }
            else {
                if(eng[i] == 'x'){
                    eng[i] = 'k' ;
                    eng.insert(i + 1 , "s");
                }
                else {
                    if ( eng[i] == 'w') {
                        eng[i] = 'v' ;
                    }
                    else{
                        if (eng[i]=='p' && eng[i+1]=='h') {
                            eng[i + 1 ] = 'f' ;
                            eng.erase( i  , 1 ) ;

                        }
                        else {
                            if(eng[i] == 'y' && eng[i + 1]=='o' && eng[i + 2 ] == 'u')
                            {
                                eng.erase( i  , 2 ) ;
                            }
                            else {
                                if( eng[i] =='o' && eng[i + 1] == 'o'){
                                    eng[i + 1 ] = 'u' ;
                                    eng.erase( i  , 1 ) ;
                                }
                                else {
                                    if (eng[i] == 'e' && eng[i + 1] == 'e'){
                                        eng[i + 1 ] = 'i' ;
                                        eng.erase( i  , 1 ) ;
                                    }
                                    else{
                                        if( eng[i]== 't' && eng[i+ 1] == 'h'){
                                            eng[i + 1 ] = 'z' ;
                                            eng.erase( i  , 1 ) ;
                                        }
                                        else{if(eng[i] == eng[i + 1])
                                            {  eng.erase( i  , 1 ) ;}}
                                    }
                                }
                            }


                        }
                    }
                }
            }
        }
    }

}
if (counter == 1 ){
goto top ; }

cout << eng ;
    return 0;
}

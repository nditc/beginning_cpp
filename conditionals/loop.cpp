#include <iostream>

int main(){
    cout << "i want to be printed 5times" << endl;
    cout << "i want to be printed 5times" << endl;
    cout << "i want to be printed 5times" << endl;
    cout << "i want to be printed 5times" << endl;
    cout << "i want to be printed 5times" << endl;
    
    // you can do the same thing using
    
    int y = 5;
    while(x>0){
        cout << "some line again" << endl;
    }
    
    // you can also do looping using for( ; ; )
    for(int i=0; i<5; i++)}{   
        // here we declared i as just an integer that represents the word 'iterator' 
        // but you can use anything you want instead of i.
        // then we told when the loop needs to stop. the loop will never stop until the expression
        // in middle does not return true. 
        // the next thing 'i++' says what to do after every loop. in this case we used the post increment
        // operator '++'. i++ is just a shorthand of 'i=i+1' and i-- is a shorthand of 'i=i-1'
        
        cout << "i want to be printed 5times";
    }
    
    int x=5;
    for( ; x>0 ; ){
        //you can always keep some sections blank if you want to but you have to keep the semicolons
        cout << "some line" << endl;
        x--;
     }
}

#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

//A function that returns the LARGER of the two
//parameters
int max(int a, int b){
    if ( a > b ){
        return a;
    } else {
        return b;
    }
}




//    (YOUR CODE HERE)
int min(int c, int d){
    if (c < d){
        return c;
    } else {
        return d;
    }
}



void main(){
    cout << "Which is larger, 42 or 96? " << max(42, 96) << endl;

    cout << "Which is smaller, 12 or 100? " << min(12, 100) << endl;

    //LAB QUESTION 5 - Comment out the next line

    //LAB QUESTIONS 6 & 7 is about this code:
    //return; 
    //Starting at zero, count to 10
    cout << "Couning to ten!" << endl;
    int number = 0;
    //tryTheNextNumber:
    while ( number <= 10 ){
        number = number + 1;
        cout << "In the loop, number = " << number << endl;

    }
    cout << "I counted to ten, and the number variable = " << number << endl;

}
        
    //cout << "I counted to ten, and the number variable = " << number << endl;

    //if ( number <= 10 ){
        //cout << "In the loop, number = " << number << endl;
        //number = number + 1;
        //goto tryTheNextNumber;
    


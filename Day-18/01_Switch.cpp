#include <iostream>
using namespace std;

int main (){

//Normal swich case examples.

    int  n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << endl;

    switch ( n ){

        case 1 : cout << " hi" << endl;             //if inside the swich is a int integer then it is 1 then this case will be print.

            break;

        case 'a' : cout << "hello " << endl;        //if inside the int is a char character and it is 'a' then this case will be print.

            break;                                  
        default : cout << "default" << endl;        // it is also optional if you  want you can add it or remove it.
    }
    cout << endl;

    char ch;
    cout << "Enter the value of ch" << endl;
    cin >> ch;

    cout << endl;

    switch(ch){
        
        case '1' : cout << "its a character of  1." << endl;
            
        case 'a' : cout << "now the character is a" << endl;

        ////break is optional, but if you remove the break then if that case is applied to nprint then it will print the other as well which is below them. until the switch ends or one of then have a break.
       
        case '2' : cout << "this will be the last print because it have break int it" << endl;

          break;
          
        case 'b' : cout << "this will not print untile the case is a charater of b" << endl;
            break;
        default : cout << "default" << endl;
    }
    cout << endl;

//Nested switch case example.

    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    cout << endl;

    char character;
    cout << "Enter the character" << endl;
    cin >> character;

    cout << endl;
    switch(num){

        case 1 : cout << "it is the numebr 1" << endl;
            break;
        case 2 : cout << " it is the numebr 2" << endl;
            break;
        case 3 : cout << "it is the numebr 3" << endl;
                    switch(character){
                        case 'a' : cout << "The character is a" << endl;
                            break;
                        case 'b' : cout << "the craracter is b" << endl;
                            break;
                        default : cout << " i don't know the charater" << endl;
                   }
            break;
        default : cout << " Default" << endl;
    }
}
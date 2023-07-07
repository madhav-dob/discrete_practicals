#include<iostream>
#include<math.h>
using namespace std;


struct poly {
    int coeff;
    int expo;
};



int input_poly( struct poly p[]){
    int num_of_terms;
    cout << "Please enter the no. of terms in the polynomial.";
    cin >> num_of_terms;
    cout << "Now please enter the coeffs and their expos." << "\n";
    for(int i =0; i< num_of_terms; ++i){
        int c , e;
        cout << "Enter the coefficient of the " << i+1 << " term :";
        cin >> c;
        cout << "Enter the power of the " << i+1 << " term :";
        cin >> e;
        
        p[i].coeff = c;
        p[i].expo = e;
    }
    return num_of_terms;

}

void display_poly( struct poly p[], int num_of_terms){
    int k ;
    for(k =0; k < num_of_terms; ++k ){
        // if(k ==0){
        //     if(p[k].coeff < 0){
        //         cout << " - ";
        //     }
        // }
        
        // else{
        if(k > 0){
            if( p[k].coeff < 0){
                //cout << " - ";
            }
            else{
                cout << " +";
            }
        }
        // }
        
        if(p[k].expo == 0){
            cout << p[k].coeff;
        }
        else{
        cout << p[k].coeff;
        cout << "(x^" << p[k].expo << ")";
        }
        
    }
    cout << "\n";
}

int evaluate(poly p[], int num_of_terms, int value){
    int sum = 0;
    for(int i = 0; i< num_of_terms ; ++i){
        sum = sum + p[i].coeff*pow(value,p[i].expo);
         
    }
    return sum;
}

int main(){
    poly poly1[20];
    int num_of_terms;
    num_of_terms = input_poly(poly1);
    display_poly(poly1, num_of_terms);
    int value;
    cout << "enter the value for which the poly. is to be solved. : ";
    cin >> value;
    cout << "Result : " << evaluate(poly1, num_of_terms, value);

    
}
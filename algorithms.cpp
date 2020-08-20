#include <iostream>
#include <string>

using std::cout;
using std::cin;

//function prototypes
void menu();
void greedyAlgorithm();
void linearSearch();
void gcdEuclidean();

void menu(){
    cout<<"\n1. Greedy Algorithm";
    cout<<"\n2. Linear Search";
    cout<<"\n3. GCD: Euclidean Algorithm";
    cout<<"\n4. Quit";

}
void greedyAlgorithm(){
    cout<<"\n--------Greedy Algorithm---------------"<<std::endl;
    int amountInCoins, totalCoins = 0;
    int c[6] = {100, 50, 25, 10, 5, 1}; //coins
    int d[6] = {0}; //number of coins 
    const char *coinType[6] = {"Dollar Coins", "50 Cent Coins", "Quarters", "Dimes", "Nickels", "Pennies"};
    
    cout<<"\nEnter the amount of money in US coins: ";
    cin>>amountInCoins;

    for(int i = 0; i < 6; i++){
        while(amountInCoins >= c[i]){
            amountInCoins -= c[i];
            d[i] += 1;
            totalCoins++;
            //cout<<"Amount left: "<<amountInCoins<<" cents"<<std::endl;
        }
    }
    cout<<"\nTotal amount of coins: "<<totalCoins<<std::endl;
    for(int i=0; i<6;i++){
        cout<<"Number of "<<coinType[i]<<": "<<d[i]<<std::endl;
    }
}
void linearSearch(){
    cout<<"\n--------Linear Search---------------"<<std::endl;
    int n = 0, arrNum[n], findNum;
    bool found = 0;
    cout<<"\nEnter a number: ";
    cin>>n;
    
    cout<<"\nEnter numbers in a list"<<std::endl;
    for(int i = 0; i<n;i++){
        cout<<"Number: ";
        cin>>arrNum[i];
    }
    //test print
    for(int i = 0; i< n; i++){
        cout<<"\narrNum["<<i<<"]: "<<arrNum[i];
    }
    cout<<"\nEnter a number to find: ";
    cin>>findNum;
    int i =0;
    while(found != 1){
        if(arrNum[i] == findNum){
            cout<<"\nNumber found at index: "<<i;
            found = 1;
        }
        else if (i == n){
            cout<<"\nNumber not found in array";
            found = 1;
        }
        else{
            i++;
        }
    }
}
void gcdEuclidean(){
    cout<<"\n--------GCD: Euclidean Algorithm---------------"<<std::endl;
    int x, y, r;
    cout<<"Enter two integers: "<<std::endl;
    cin>>x>>y;
    while(y != 0){
        r = x % y;
        x = y;
        y = r;
    }
    cout<<"\nGCD: "<<x;
}
int main(){
    int choice;
    do{
        //print a menu
        menu();
        cout<<"\nChoice: ";
        cin>>choice;
        cout<<std::endl;
    }while(choice != 4);



    return 0;
}



#include<iostream>

using namespace std;

double GetPriceQualityRatio(int price,int quality){
    return price/quality; 
}

int main(){
    int n;
    cin >> n;
    double qual[n];
    string str[n];
    for(int i = 0; i < n;i++){
        cin >> str[i];
        int price;
        cin >> price;
        int quality;
        cin >> quality;
        qual[i] = GetPriceQualityRatio(price, quality);
    }
    int min = qual[0];
    for(int i = 1; i < n;i++){
        if(min > qual[i]){
            min = qual[i];
        }
    }
    for(int i = 0;i < n;i++){
        if(min == qual[i]){
            cout << str[i];
            break;
        }
    }
    

    return 0;
}

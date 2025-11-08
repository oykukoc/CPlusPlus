#include <iostream>
using namespace std;

int main(){

    double cheese = 13.90;
    double mixed = 15.50;
    double salami = 14.60;

    int select;
    int countOfOrder;
    double sum;

    double payment;
    double money;
    double change;

    double countOfSorts[] = {cheese,mixed,salami};

    // dizinin toplam byte boyutu ile bir elemanın byte boyutundan yola çıkarak uzunluğu bulur.
    int length = sizeof(countOfSorts) / sizeof (countOfSorts[0]);

    //Pizza arrayi büyüklüğünü geçemez yada 0 ve 0 dan küçük olamaz
    do{
        cout << "Please select a Pizza Sort, which you would like to eat \n 1- Cheesy \n 2- Mixed \n 3- Salami" << endl;
        cin >> select;

        if(select > length || select <= 0)
            cout << "Please select from the menu according to the number!" << endl;

    }while(select > length || select <= 0);

    // 0 veya 0 dan küçük sipariş verilemez
    do{
        cout << "How many do you want to order?" << endl;
        cin >> countOfOrder ;

        if(countOfOrder <= 0)
            cout << "You have to order at least 1!" << endl;
         
    }while(countOfOrder <= 0);

    sum = countOfSorts[select - 1 ] * countOfOrder;
    cout << "You have to pay " << sum << " Euro."<< endl;

    //Neyle ödemek istediğini sorar
    do{
        cout << "How do you wanna pay?\n 1- Cash \n 2- Credit Card" << endl;
        cin >> payment;
               
        if(payment > 2 || payment <= 0)
            cout << "You have to choose a valid payment method!" << endl;

    }while(payment > 2 || payment <= 0);

    if(payment == 1){
        do{
            cout << "Please enter the amount of the money: " << endl;
            cin >> money; 
            if(money < sum )           
                cout << "Please give me at least " << sum << " Euro!" << endl;
        }
        while(money < sum );

        change = money - sum;
        cout << "Here is your change: " << change  << " Thanks for choosing us!" << endl;
    }
    else{
        change = 0;
        cout << "Here is your change " << change  << " Thanks for choosing us!" << endl;
    }

    return 0;
}

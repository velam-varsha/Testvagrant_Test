#include <bits/stdc++.h>
using namespace std;


class Products {
    string Product_name;
    int Price;
    int GST;
    int Quantity; 
    int Total_price_per_product;
    Products();

    int Product(string product_name, int price, int gst, int quantity){
        this->Product_name = product_name;
        this->Price = price;
        this->GST= gst;
        this->Quantity= quantity;
        return 0;
    }


};

int cal_gst (int price, int gst){
    int gst_amount = (gst*price)/100;
}
int total_price_per_product(int gst, int price, int quantity){
    int amount = ((price*quantity)*gst)/100;
    if(price > 500){
        amount -= (amount * 5)/100;
    }
    return amount;
}

int main (){

    Products p1 = new Products();
    Products p2 = new Products();
    Products p3 = new Products();
    Products p4 = new Products();
    p1 = Product("Leather wallet", 1100, 18, 1);
    p2 = Product("Umbrella", 900, 12, 4);
    p3 = Product("Cigarette", 200, 28, 3);
    p4 = Product("Honey", 100, 0, 2);

    int p1_price =  total_price_per_product(p1.GST, p1.Price, p1.Quantity);
    int p2_price =  total_price_per_product(p2.GST, p2.Price, p2.Quantity);
    int p3_price =  total_price_per_product(p3.GST, p3.Price, p3.Quantity);
    int p4_price =  total_price_per_product(p4.GST, p4.Price, p4.Quantity);

    int p1_gst = cal_gst(p1.Price, p1.GST);
    int p2_gst = cal_gst(p2.Price, p2.GST);
    int p3_gst = cal_gst(p3.Price, p3.GST);
    int p4_gst = cal_gst(p4.Price, p4.GST);

    int gst_arr[4];
    gst_arr[0] = p1_gst;
    gst_arr[1] = p2_gst;
    gst_arr[2] = p3_gst;
    gst_arr[3] = p4_gst;

    int maximum_gst=0;
    for(int i = 0; i<4; i++){
        maximum_gst = max(maximum_gst, gst_arr[i]);
    }
    int value;
    for(int i = 0; i<4; i++){
        if(maximum_gst == gst_arr[i]){
            value = i;
        }
    }

    string name;
    if(value = 0){
        name = "Leather wallet";
    }
    else if(value = 1){
        name = "Umbrella";
    }
    else if(value = 2){
        name = "Cigarette";
    }
    else if(value = 3){
        name = "Honey";
    }



    int total_amount[4];
    total_amount[0] = p1_price;
    total_amount[1] = p2_price;
    total_amount[2] = p3_price;
    total_amount[3] = p4_price;

    int total = 0;
    for(int i = 0; i<4; i++){
        total += total_amount[i];
    }

    cout<<"Product with maximum gst is "<< name << endl;
    cout<<"Total amount to be paid to the shop-keeper"<< total <<endl;
    

    return 0;
}
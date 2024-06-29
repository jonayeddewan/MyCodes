#include<bits/stdc++.h>
using namespace std;

class cloth{
    private:
        string Shop_name, Customer_name,
               type_of_cloth, Tailor_name, Delivery_date;
    private:
        int Price,Cloth_Size;

    public:
        void get_shop_name(){
            getline(cin,Shop_name);
            set_shop_name(Shop_name);
        }
        void get_customer_name(){
            getline(cin,Customer_name);
        }
        void get_cloth_type(){
            getline(cin,type_of_cloth);
        }
        void get_tailor_name(){
            getline(cin,Tailor_name);
        }
        void get_delivery_date(){
            getline(cin,Delivery_date);
        }
        void get_cloth_size(){
            cin>>Cloth_Size;
        }
        void get_price(){
            cin>>Price;
        }

    public:
        void set_shop_name(string s){
            Shop_name = s;
        }
        void set_customer_name(string s){
            Customer_name = s;
        }
        void set_cloth_type(string s){
            type_of_cloth = s;
        }
        void set_tailor_name(string s){
            Tailor_name = s;
        }
        void set_delivery_date(string s){
            Delivery_date = s;
        }

};

int main(){

}

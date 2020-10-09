/*************************************************************************
	> File Name: 7.11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月09日 星期五 20时04分01秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
class data;
istream &read(istream &i,data &a);
/*{
    double p=0;
    i >> a.bookNo >> a.num >> p;
    a.money=a.num*p;
    return i;
}*/
class data {
public:
    data()=default;
    data(const string &s):bookNo(s){cout << "data(1)" << endl;print();}
    data(const string &s,int n,double m):bookNo(s),num(n),money(m){cout << "data(3)" << endl;print();}
    data(istream &i){
        read(i,*this);
        cout << "data(is)" << endl;
        print();
    }
    void print(){
        cout << this->bookNo << " " << this->num << " " << this->money << endl;
    }
    string bookNo;
    int num=0;
    double money=0;
};
istream &read(istream &i,data &a)
{
    double p=0;
    i >> a.bookNo >> a.num >> p;
    a.money=a.num*p;
    return i;
}
/*
data::data(istream &i){
        read(i,*this);
        cout << "data(is)" << endl;
        print();
}*/
int main()
{
    data a;
    cout << "data()" << endl;
    data b("abcd");
    data("aasd",2,6);
    data d(cin);
    return 0;
}

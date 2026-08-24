#include<iostream>
using namespace std;

class product
{
private:
int product_id;
string name;
float price;

public:
product()
{
product_id = 0;
name = "____";
price = 0;
}

product(int i, string n, float s)
{
product_id = i;
name = n;
price = s;
}

product(const product &p)
{
product_id = p.product_id;
name = p.name;
price = p.price;
}

void display()
{
cout << "Product Id : " << product_id << endl;
cout << "Product Name : " << name << endl;
cout << "Product Price : " << price << endl;
}
};

int main()
{
product p1;
product p2(2038,"Computer setup",24450.56);
product p3(p2);
p1.display();
p2.display();
p3.display();
return 0;
}


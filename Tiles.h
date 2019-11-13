#ifndef TILES_H_INCLUDED
#define TILES_H_INCLUDED

class Tiles
{
    std::string brand;
    double size_h;
    double size_w;
    int count;
    double price;
public:
    Tiles(std::string brand = "", double size_h = 0, double size_w = 0, int count = 0, double price = 0)
    : brand(brand), size_h(size_h),size_w(size_w), count(count), price(price) {}// constructor initializer list

    //Setters

    void Set_Price(const double&  new_price){price = new_price;}
    void Set_Size_h(const double& new_size_h){size_h = new_size_h;}
    void Set_Size_w(const double& new_size_w){size_w = new_size_w;}
    void Set_Count(const int& new_count){count = new_count;}
    void Set_Brand(const std::string& new_brand){brand = new_brand;}

    //Getters

    std::string Get_Brand()const {return brand;}
    double Get_Price()const {return price;}
    double Get_Count()const {return count;}
    double Get_Size_h()const {return size_h;}
    double Get_Size_w()const { return size_w;}
/***
Rule: Getters must use return type by value or by constant reference. Do not use return type for getters on non-constant reference.
***/
};

void Get_Total_Price(const std::vector<Tiles>& tileses)
{
    double price = 0;
    for(auto& elem : tileses)
    {
        price += elem.Get_Price();
    }
    std::cout<< "Total price is : ";
    std::cout<< price;
}
void Print(const std::vector<Tiles>& tileses)
{
    for(auto& elem : tileses)
    {
        std::cout << "Brand is :" << elem.Get_Brand()<<std::endl;
        std::cout << "Count is : " << elem.Get_Count()<<std::endl;
        std::cout << "Price is : " << elem.Get_Price()<<std::endl;
        std::cout << "Width is : " << elem.Get_Size_h()<<std::endl;
        std::cout << "Height is : " << elem.Get_Size_w()<<std::endl;
        std::cout << std::endl;

    }
}



#endif // TILES_H_INCLUDED

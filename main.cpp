#include<iostream>
#include<vector>

int main ()
{

   std::vector <int> myvect ={12,5,6,8,3};
   for(int  var : myvect )
   {
     std::cout << var <<std::endl;
   }
   
   std::cin.get();
   return 0;

}

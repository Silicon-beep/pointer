#ifndef FOODITEMH
#define FOODITEMH

#include <string>

using namespace std;

class FoodItem {
   public:
   FoodItem();   // TODO: Declare default constructor

   FoodItem(string name,double fat,double carbs,double protein);   // TODO: Declare second constructor with arguments
      // to initialize private data members

      string GetName();

      double GetFat();

      double GetCarbs();

      double GetProtein();

      double GetCalories(double numServings);

      void PrintInfo();

   private:
      string name;
      double fat;
      double carbs;
      double protein;
};

#endif
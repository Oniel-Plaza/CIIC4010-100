#include <string>

using namespace std;

class Pets 
{
    private:
       string species,
       name,
       color,
       size,
       description;
       
       double age,
       weight,
       height;

    public:
        // String Setters
        void setSpecies(string s) { species = s; }
        void setName(string n) { name = n; }
        void setColor(string c) { color = c; }
        void setSize(string z) { size = z; }

        // // Double Setters
        // void setAge(double a) { age = a; }
        // void setWeight(double w) { weight = w; }
        // void setHeight(double h) { height = h; }

        // String Getters
        string getSpecies() { return species; }
        string getName() { return name; }
        string getColor() { return color; }
        string getSize() { return size; }

        Pets(string s, string n, string c, string z)
        {
            this->species = s;
            this->name = n;
            this->color = c;
            this->size = z;
        };

        // Other Functions
       void setDescription(string d);
       string getDescription();

       void setAge(int a);
       int getAge();
       int addTentoAge();
};
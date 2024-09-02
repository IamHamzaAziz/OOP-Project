#include<iostream>
using namespace std;

// Structure for customer details
struct CustomerDetails
{
    string name;
    long long int phone_number;
    string address;
};

// Parent Class
class Car
{
    public:
        string model;
        string color;
        string company;
        int manufacturing_year;
        long int price;
        int tax;
        int installments[3];

        void change_color(string c)
        {
            color=c;
            cout<<endl<<"Your car has been now colored "<<color<<"."<<endl;
        }
};

class ElectricCar : public Car
{
    public:
        int miles_per_charge;        // Miles it travels after getting charged 100 percent

        ElectricCar()
        {
            cout<<endl<<"We offer and deal with one of the best Electric Cars in the country."<<endl;
        }

        void company_selection()
        {
            int company_num_select;

            cout<<"Currently we have Electric Cars from following companies"<<endl;
            cout<<"1. Tesla"<<endl<<"2. Lucid Motors"<<endl<<"3. Nio"<<endl;
            cout<<"Type one of above serial numbers to select the company: ";
            cin>>company_num_select;

            if (company_num_select==1)
            {
                company="Tesla";
            }
            else if (company_num_select==2)
            {
                company="Lucid Motors";
            }
            else
            {
                company="Nio";
            }
        }

        void model_selection()
        {
            int model_num_select;

            if (company=="Tesla")
            {
                cout<<endl<<"For Tesla we have following models \n";
                cout<<"1. Model X\n2. Model S\n3. Model 3\n4. Model Y\n";
                cout<<"Write serial number to select a number: ";
                cin>>model_num_select;

                if (model_num_select==1)
                {
                    model="Model X";
                    miles_per_charge=320;
                    price=50000000;
                }
                else if (model_num_select==2)
                {
                    model="Model S";
                    miles_per_charge=310;
                    price=20000000;
                }
                else if (model_num_select==3)
                {
                    model="Model 3";
                    miles_per_charge=310;
                    price=10000000;
                }
                else
                {
                    model="Model Y";
                    miles_per_charge=315;
                    price=8000000;
                }
            }

            else if (company=="Lucid Motors")
            {
                cout<<endl<<"In Lucid Motors we have below models\n";
                cout<<"1. Air\n2. Gravity\nSelect by writing serial number: ";
                cin>>model_num_select;

                if (model_num_select==1)
                {
                    model="Air";
                    miles_per_charge=320;
                    price=9000000;
                }
                else
                {
                    model="Gravity";
                    miles_per_charge=310;
                    price=9500000;
                }
            }

            else
            {
                cout<<endl<<"Nio models are given below\n";
                cout<<"1. ES8\n2. EP9\n3. EC6\nWrite serial number to select model: ";
                cin>>model_num_select;

                if (model_num_select==1)
                {
                    model="ES8";
                    miles_per_charge=305;
                    price=8000000;
                }
                else if (model_num_select==2)
                {
                    model="EP9";
                    miles_per_charge=310;
                    price=7500000;
                }
            }    
        }

        void manufacturing_year_selection()
        {
            cout<<endl<<"These cars were manufactured from 2018 to 2022. Tell us which year one you want: ";
            cin>>manufacturing_year;

            if (manufacturing_year==2018 || manufacturing_year==2019)
            {
                tax=100000;
                price+=tax;             // Total price after adding Tax
            }
            else if (manufacturing_year==2020)
            {
                tax=250000;
                price+=tax;
            }
            else if (manufacturing_year==2021 || manufacturing_year==2022)
            {
                tax=300000;
                price+=tax;
            }
        }

        void color_selection()
        {
            int color_select;

            cout<<endl<<"We have following colors available."<<endl;
            cout<<"1. Black\n2. White\n3. Blue\n";
            cout<<"Select one (Don\'t worry you can change them later): ";
            cin>>color_select;

            if (color_select==1)
            {
                color="Black";
            }
            else if (color_select==2)
            {
                color="White";
            }
            else
            {
                color="Blue";
            }
        }

        void display_info()
        {
            cout<<endl<<"Your Car is "<<company<<" "<<model<<". Moreover it\'s color is "<<color<<" and once charged 100 percent it travels "<<miles_per_charge<<" miles. Original price is "<<price-tax<<" PKR and after taxation it becomes "<<price<<" PKR."<<endl;
        }

        void change_battery(int new_battery)
        {
            miles_per_charge=new_battery;
            cout<<endl<<"Your cars\'s new battery will travel "<<new_battery<<" miles per charge."<<endl;
        }
};

class PetrolCar : public Car
{
    private:
        int mileage;

    public:
        PetrolCar()
        {
            cout<<endl<<"We have decent variety and offer great services for Petrol Cars."<<endl;
        }

        void set_mileage(int m)         // Setter
        {
            mileage=m;
        }
        int return_mileage()            // Getter
        {
            return mileage;
        }

        void company_selection()
        {
            int company_num_select;

            cout<<endl<<"Currently we have Petrol Cars from following companies"<<endl;
            cout<<"1. Toyota"<<endl<<"2. Honda"<<endl<<"3. Kia"<<endl<<"4. Hyundai"<<endl;
            cout<<"Type one of above serial numbers to select the company: ";
            cin>>company_num_select;

            if (company_num_select==1)
            {
                company="Toyota";
            }
            else if (company_num_select==2)
            {
                company="Honda";
            }
            else if (company_num_select==3)
            {
                company="Kia";
            }
            else
            {
                company="Hyundai";
            }
        }

        void model_selection()
        {
            int model_num_select;

            cout<<endl;
            if (company=="Toyota")
            {
                cout<<"In toyota we provide following models\n";
                cout<<"1. Land Cruiser\n2. Corolla\n3. Yaris\n4. Prius\n";
                cout<<"Write a serial number to select a model: ";
                cin>>model_num_select;

                if (model_num_select==1)
                {
                    model="Land Cruiser";
                    set_mileage(7);
                    price=80000000;
                }    
                else if (model_num_select==2)
                {
                    model="Corolla";
                    set_mileage(14);
                    price= 4500000;
                }
                else if (model_num_select==3)
                {
                    model="Yaris";
                    set_mileage(17);
                    price=3500000;
                }
                else
                {
                    model="Prius";
                    set_mileage(23);
                    price=14500000;
                }

            }

            else if (company=="Honda")
            {
                cout<<"For Honda enthusiasts we have\n";
                cout<<"1. BRV\n2. City\n3. Civic\n";
                cout<<"Tell us your desired model by writing serial number of one of the above: ";
                cin>>model_num_select;

                if (model_num_select==1)
                {
                    model="BRV";
                    set_mileage(15);
                    price=4500000;
                }
                else if (model_num_select==2)
                {
                    model="City";
                    set_mileage(18);
                    price=3500000;
                }
                else
                {
                    model="Civic";
                    set_mileage(14);
                    price=5700000;
                }
            }

            else if (company=="Kia")
            {
                cout<<"In Kia we have following models\n";
                cout<<"1. Picanto\n2. Sportage";
                cout<<"Type serial number to select a model: ";
                cin>>model_num_select;

                if (model_num_select==1)
                {
                    model="Picanto";
                    set_mileage(14);
                    price=2700000;
                }
                else
                {
                    model="Sportage";
                    set_mileage(12);
                    price=5800000;
                }
            }

            else
            {
                cout<<"For Hyundai customers we have following models\n";
                cout<<"1. Elantra\n2. Tucson\n3. Sonata\n";
                cout<<"Type serial number to select a model: ";
                cin>>model_num_select;

                if (model_num_select==1)
                {
                    model="Elantra";
                    set_mileage(16);
                    price=4200000;
                }
                else if (model_num_select==2)
                {
                    model="Tucson";
                    set_mileage(14);
                    price=5700000;
                }
                else
                {
                    model="Sonata";
                    set_mileage(13);
                    price=7000000;
                }
            }
        }

        void manufacturing_year_selection()
        {
            cout<<endl<<"These cars were manufactured from 2018 to 2022. Tell us which year one you want: ";
            cin>>manufacturing_year;

            if (manufacturing_year==2018 || manufacturing_year==2019)
            {
                tax=50000;
                price+=tax;             // Total price after adding Tax
            }
            else if (manufacturing_year==2020)
            {
                tax=200000;
                price+=tax;
            }
            else if (manufacturing_year==2021 || manufacturing_year==2022)
            {
                tax=250000;
                price+=tax;
            }
        }

        void color_selection()
        {
            int color_select;

            cout<<endl<<"We have following colors available."<<endl;
            cout<<"1. Black\n2. White\n3. Dark Blue\n4. Silver\n";
            cout<<"Select one (Don\'t worry you can change them later): ";
            cin>>color_select;

            switch (color_select)
            {
                case 1:
                    color="Black";
                    break;
                case 2:
                    color="White";
                    break;
                case 3:
                    color="Dark Blue";
                    break;
                default:
                    color="Silver";
                    break;
            }
        }

        void display_info()
        {
            cout<<endl<<"The Car you have selected is "<<company<<" "<<model<<". Adding more the color is "<<color<<" while it travels "<<return_mileage()<<" kilometers per litre. Its original price is "<<price-tax<<" and with taxation total price is "<<price<<"."<<endl;
        }
};

int main()
{
    char choice, car_type_select, color_choice, payment_option_select;
    int service_option_select, new_battery, info_num_select;
    string color_select;

    cout<<"------------------ WELCOME TO OUR CARS SHOWROOM ------------------"<<endl;

    cout<<endl<<"Do you want to buy a car (Y/N)? ";
    cin>>choice;

    if (choice=='Y' || choice=='y')
    {
        cout<<endl<<"Which type you want Electric Car (type E) or Petrol Car (type P)? ";
        cin>>car_type_select;

        if (car_type_select=='E' || car_type_select=='e')
        {
            ElectricCar EC1;
            CustomerDetails C1;

            EC1.company_selection();
            EC1.model_selection();
            EC1.manufacturing_year_selection();
            EC1.color_selection();

            cout<<endl<<"All required inforamtion regarding car has been gathered.";
            cout<<"Tell us which info you would like to see\n";
            cout<<"1. Miles per Charge\n2. Tax\n3. Original Price\n4. Total price\n5. All Info";
            cout<<"\nSelect an option by typing the serial number: ";
            cin>>info_num_select;

            if (info_num_select==1)
            {
                cout<<endl<<"Once charged 100 percent your car travels "<<EC1.miles_per_charge<<"."<<endl;
            }
            else if (info_num_select==2)
            {
                ElectricCar *pointerE=&EC1;                 // Pointers to Class
                cout<<endl<<"Tax on your car is "<<pointerE->tax<<"."<<endl;
            }
            else if (info_num_select==3)
            {
                cout<<endl<<"Original Price (Without Taxation) is "<<EC1.price-EC1.tax<<"."<<endl;
            }
            else if (info_num_select==4)
            {
                cout<<endl<<"Total price is "<<EC1.price<<"."<<endl;
            } 
            else
            {
                EC1.display_info();
            }

            cout<<"Want to change Car color(Y/N)? ";
            cin>>color_choice;
            if (color_choice=='y' || color_choice=='Y')
            {
                cout<<"Tell us which color you want on your Car: ";
                cin>>color_select;
                EC1.change_color(color_select);
            }

            cout<<endl<<"Congratulations, the Car is now yours."<<endl;

            cout<<"Please fill below information to complete the process"<<endl;
            cout<<"What is your name: ";
            cin.ignore();
            getline(cin,C1.name);
            cout<<"Please type your phone number: ";
            cin>>C1.phone_number;
            cout<<"What is your address: ";
            cin.ignore();
            getline(cin,C1.address);

            cout<<endl<<"We also offer to pay us in installments. Would you want to pay like this(Y/N)? ";
            cin>>payment_option_select;

            if (payment_option_select=='y' || payment_option_select=='Y')
            {
                int p=EC1.price;
                EC1.installments[0]=p/2;
                p=p/2;
                EC1.installments[1]=p/2;
                EC1.installments[2]=EC1.installments[1];
                cout<<"Your first installment is "<<EC1.installments[0]<<". Remaining 2 are "<<EC1.installments[1]<<" and "<<EC1.installments[2]<<"."<<endl;
            }

            cout<<endl<<"Thanks "<<C1.name<<" for dealing with us. We will deliver the car on the address you gave and payment matters will be dealt there."<<endl;
        }

        else
        {
            PetrolCar PC1;
            CustomerDetails C2;

            PC1.company_selection();
            PC1.model_selection();
            PC1.manufacturing_year_selection();
            PC1.color_selection();
            
            cout<<endl<<"All required inforamtion regarding car has been gathered.";
            cout<<"Tell us which info you would like to see\n";
            cout<<"1. Milesage\n2. Tax\n3. Original Price\n4. Total price\n5. All Info";
            cout<<"\nSelect an option by typing the serial number: ";
            cin>>info_num_select;

            if (info_num_select==1)
            {
                cout<<endl<<"Your car mileage is "<<PC1.return_mileage()<<"."<<endl;
            }    
            else if (info_num_select==2)
            {
                PetrolCar *pointerP=&PC1;           // Pointer to Class
                cout<<endl<<"Tax on your car is "<<pointerP->tax<<"."<<endl;
            }
            else if (info_num_select==3)
            {
                cout<<endl<<"Original Price (Without Taxation) is "<<PC1.price-PC1.tax<<"."<<endl;
            }
            else if (info_num_select==4)
            {
                cout<<endl<<"Total price is "<<PC1.price<<"."<<endl;
            } 
            else
            {
                PC1.display_info();
            }

            cout<<endl<<"Want to change Car color (Y/N)? ";
            cin>>color_choice;
            if (color_choice=='y' || color_choice=='Y')
            {
                cout<<"Tell us which color you want on your Car: ";
                cin>>color_select;
                PC1.change_color(color_select);
            }

            cout<<endl<<"Congratulations, the Car is now yours."<<endl;
            cout<<"Please fill below information to complete the process"<<endl;
            cout<<"What is your name: ";
            cin.ignore();
            getline(cin,C2.name);
            cout<<"Please type your phone number: ";
            cin>>C2.phone_number;
            cout<<"What is your address: ";
            cin.ignore();
            getline(cin,C2.address);

            cout<<endl<<"We also offer to pay us in installments. Would you want to pay like this(Y/N)? ";
            cin>>payment_option_select;

            if (payment_option_select=='y' || payment_option_select=='Y')
            {
                int p=PC1.price;
                PC1.installments[0]=p/2;
                p=p/2;
                PC1.installments[1]=p/2;
                PC1.installments[2]=PC1.installments[1];
                cout<<"Your first installment is "<<PC1.installments[0]<<". Remaining 2 are "<<PC1.installments[1]<<" and "<<PC1.installments[2]<<"."<<endl;
            }            

            cout<<endl<<"Thanks "<<C2.name<<" for dealing with us. We will deliver the car on the address you gave and payment matters will be dealt there."<<endl;
        }
    }

    else
    {
        cout<<endl<<"We also offer other services such as below"<<endl;
        cout<<"1. Changing your Car Color."<<endl;
        cout<<"2. Changing yor Electric Car Battery."<<endl;
        cout<<"Type one of above serial numbers to select the option: ";
        cin>>service_option_select;

        if (service_option_select==1)
        {
            Car C1;
            cout<<endl<<"Tell us which Color you want on your Car: ";
            cin>>color_select;
            C1.change_color(color_select);
        }
        else
        {
            ElectricCar EC2;
            cout<<endl<<"Tell us how much Miles per Charge Battery you want on your Car (Maximum Range 400): ";
            cin>>new_battery;
            EC2.change_battery(new_battery);
        }
    }

    // Final message after program is over
    cout<<endl<<"REGARDS";
    return 0;
}
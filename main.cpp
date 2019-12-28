/*
 
 Chapter 2 Part 5 Task:
 User-Defined Types
 
 click the edit button in the lower right corner.
 
 1) write 10 user-defined types, each with a random number of member variables
 try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.
 make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.
 No primitives allowed!
 
 6) After you finish defining each type, click the [Compile, Link and Run] button to make sure you don't have any errors.
 
 share the url into the #ch2-p05 channel once you've got all 10 implemented
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1)
 */

/*
 2)
 */

/*
 3)
 */

/*
 4)
 */

/*
 5)
 */

/*
 6)
 */

/*
 7)
 */

/*
 8)
 */

/*
 9)
 */

/*
 10)
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}

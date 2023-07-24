//
//  main.cpp
//  crowtest
//
//  Created by Lucie Chevreuil on 7/24/23.
//

#include "crow_all.h"

int main()
{
    crow::SimpleApp app; //define your crow application

    //define your endpoint at the root directory
    CROW_ROUTE(app, "/")([](){
        return "Hello world";
    });
    
    CROW_ROUTE(app, "/add/<int>/<int>")
    ([](int a, int b)
    {
        return std::to_string(a+b);
    });
    

    //set the port, set the app to run on multiple threads, and run the app
    app.port(18080).multithreaded().run();
}

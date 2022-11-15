// Copyright (C) 2019 raodm@miamioh.edu

#define MYSQLPP_MYSQL_HEADERS_BURIED
#include <mysql++/mysql++.h>
#include <string>
#include <iostream>

int main(int argc, char *argv[]) {
    // Connect to database with: database, server, userID, password
    mysqlpp::Connection myDB("cse278s19", "os1.csi.miamioh.edu", "cse278s19",
            "rbHkqL64VpcJ2ezj");
    // Create a query
    mysqlpp::Query query = myDB.query();
    query << "SELECT pname, price, category, manufacturer FROM Product "
	    <<"WHERE price<=%0;";
     
    query.parse();  // check to ensure query is correct
 std::string price;  
  getline(std::cin,price);
std::cout<<"Content-Type: text/html\r\n\r\n";
	    std::string b= price.substr(6);
	    int ex = std::stoi(b);
         
    // Run the query and get stored results
    mysqlpp::StoreQueryResult result = query.store(ex);

    // Results is a 2D vector of mysqlpp::String objects.
    

// Print the results.
std::cout<<"<table border=1>\n";
    for (const auto& row : result) {
std::cout<<"<tr>";
        for (const auto& col : row) {
               std::cout<<"<td>"<<col<<"</td>";
         

            std::cout << col << "\t";
        }
std::cout<<"</tr>\n";
}
        
    std::cout<<"/table>\n";
    // All done
    return 0;
}



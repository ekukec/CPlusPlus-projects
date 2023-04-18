#ifndef EMPLOYEE_H
 6 #define EMPLOYEE_H
 7 #include <string>
 8 using namespace std;
 9 namespace employeessavitch
10 {
11 class Employee
12 {
13 public:
14 Employee( );
15 Employee(string the_name, string the_ssn);
16 string get_name( ) const;
17 string get_ssn( ) const;
18 double get_net_pay( ) const;
19 void set_name(string new_name);
20 void set_ssn(string new_ssn);
21 void set_net_pay(double new_net_pay);
22 void print_check( ) const;
23 private:
24 string name;
25 string ssn;
26 double net_pay;
27 };
28 }//employeessavitch
29 #endif //EMPLOYEE_H


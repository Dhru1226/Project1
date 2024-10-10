/*
Title: Project 1
Filename: Project1
Programmer: Dhrumi Mistry
Date:10/10/2024
Requirements:
Crazy Al’s Computer Emporium is a retail seller of home computers. The sales staff at Crazy Al’s works strictly on commission. At the end of the month, each salesperson’s commission
is calculated according to Table 1.
Table 1 Commission rates
Sales This Month Commission Rate
Less than $10,000 5%
$10,000–$14,999 10%
$15,000–$17,999 12%
$18,000–$21,999 14%
$22,000 or more 16%
*/

#include <iostream>
#include <iomanip>
using namespace std;


    //calculate commission and return commission rate
    double calculateCommissionrate(double sales) {
        if (sales < 10000)
            return 0.05;
        else if (sales >= 10000 && sales <= 14999)
            return 0.10;
        else if (sales >= 15000 && sales <= 17999)
            return 0.12;
        else if (sales >= 18000 && sales <= 21999)
            return 0.14;
        else
            return 0.16;

    }
    void displayResults(double sales, double commissionRate, double commission, double advancePay, double remainingPay) {
        double remainpay = commission - advancePay;

        cout << fixed << setprecision(2);
        cout << "Pay Results" << endl;
        cout << "----------" << endl;
        cout << "sales: $" << sales << endl;
        cout << "Commission rate : " << commissionRate << endl;
        cout << "Commission: $" << commission << endl;
        cout << "Advanced Pay: $" << advancePay << endl;

        if (remainingPay >= 0)
            cout << "Remaining Pay: $" << remainingPay << endl;
        else
            cout << "Amount to reimburse Crazy Al's: $" << -remainingPay << endl;
    }

    int main() {
        double sales, advancePay;

        //Input sales and advance pay
        cout << "Enter the salsperson'smonthly sales: ";
        cin >> sales;

        cout << "Enter the amount of advanced pay for this salesperson: ";
        cin >> advancePay;

        //calculate
        double commissionRate = calculateCommissionrate(sales);
        double commission = sales * commissionRate;

        //calculate
        double remainingPay = commission - advancePay;

        //Display the results
        displayResults (sales, commissionRate, commission, advancePay, remainingPay);

        return 0;



    }







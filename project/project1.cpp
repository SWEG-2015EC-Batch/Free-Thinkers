//Temperature methodology

#include <iostream>
#include <iomanip>
using namespace std;

const int NUMOFMONTHS = 12;
const int NUMOFDAYS = 31;
const int NUMOFTEMPERATURES=3;//which are high,low,and average

int main() {
    double weatherData[NUMOFMONTHS][NUMOFDAYS][NUMOFTEMPERATURES];

    for (int month = 0; month < NUMOFMONTHS; ++month) {
        for (int day = 0; day < NUMOFDAYS; ++day) {
            cout<<"Enter high temperature for Month " << month + 1 << ", Day " << day + 1 << ": ";
            cin >> weatherData[month][day][0];

            cout << "Enter low temperature for Month " << month + 1 << ", Day " << day + 1 << ": ";
            cin >> weatherData[month][day][1];

            weatherData[month][day][2] = (weatherData[month][day][0] + weatherData[month][day][1]) / 2.0;
        }
    }

    int choice;
    do {
        cout << "\n1. Any day's high and low temperature\n";
        cout << "2. Any month's high, low, and average temperatures for given month\n";
        cout << "3. Month and day with the highest temperature\n";
        cout << "4. Month and day with the lowest temperature\n";
        cout << "5. All months' average temperatures in table format\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int month, day;
                cout << "Enter month and day (1-12 and 1-31): ";
                cin >> month >> day;

                if (month >= 1 && month <= NUMOFMONTHS && day >= 1 && day <= NUMOFDAYS) {
                    cout << "High temperature: " << weatherData[month - 1][day - 1][0] << "°C\n";
                    cout << "Low temperature: " << weatherData[month - 1][day - 1][1] << "°C\n";
                } else {
                    cout << "Invalid month or day.\n";
                }
                break;
            }
            case 2: {
                int month;
                cout << "Enter month (1-12): ";
                cin >> month;

                if (month >= 1 && month <= NUMOFMONTHS) {
                    double highSum = 0, lowSum = 0, avgSum = 0;
                    for (int day = 0; day < NUMOFDAYS; ++day) {
                        highSum += weatherData[month - 1][day][0];
                        lowSum += weatherData[month - 1][day][1];
                        avgSum += weatherData[month - 1][day][2];
                    }
                    cout << "High temperature: " << highSum / NUMOFDAYS << "°C\n";
                    cout << "Low temperature: " << lowSum / NUMOFDAYS << "°C\n";
                    cout << "Average temperature: " << avgSum / NUMOFDAYS << "°C\n";
                } else {
                    cout << "Invalid month.\n";
                }
                break;
            }
            case 3: {
                double maxTemp = -1;
                int maxMonth = -1, maxDay = -1;

                for (int month = 0; month < NUMOFMONTHS; ++month) {
                    for (int day = 0; day < NUMOFDAYS; ++day) {
                        if (weatherData[month][day][0] > maxTemp) {
                            maxTemp = weatherData[month][day][0];
                            maxMonth = month + 1;
                            maxDay = day + 1;
                        }
                    }
                }

                cout << "Month and day with the highest temperature: ";
                cout << "Month " << maxMonth << ", Day " << maxDay << " - " << maxTemp << "°C\n";
                break;
            }
            case 4: {
                double minTemp = 100;
                int minMonth = -1, minDay = -1;

                for (int month = 0; month < NUMOFMONTHS; ++month) {
                    for (int day = 0; day < NUMOFDAYS; ++day) {
                        if (weatherData[month][day][1] < minTemp) {
                            minTemp = weatherData[month][day][1];
                            minMonth = month + 1;
                            minDay = day + 1;
                        }
                    }
                }

                cout << "Month and day with the lowest temperature: ";
                cout << "Month " << minMonth << ", Day " << minDay << " - " << minTemp << "°C\n";
                break;
            }
            case 5: {
                cout << "All months' average temperatures in table format:\n";
                cout << setw(10) << "Month" <<setw(20)<<"Average Temperature\n";
                
                for (int month = 0; month < NUMOFMONTHS; ++month) {
                    double avgSum = 0;
                    for (int day = 0; day < NUMOFDAYS; ++day) {
                        avgSum += weatherData[month][day][2];
                    }
                    double monthlyAvg = avgSum / NUMOFDAYS;
                    cout << setw(10) << month + 1 << setw(20) << monthlyAvg << "°C\n";
                }
                break;
            }
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}

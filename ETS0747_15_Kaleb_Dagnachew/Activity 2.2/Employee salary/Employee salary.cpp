 string employeeName;
    double weeklyWorkingHours, bonusRate, ratePerHour, baseSalary;
    double grossSalary, bonusPayment, netSalary;

    cout << "Enter employee name: ";
    cin >> employeeName;

    cout << "Enter weekly working hours: ";
    cin >> weeklyWorkingHours;

    cout << "Enter bonus rate: ";
    cin >> bonusRate;

    cout << "Enter rate per hour: ";
    cin >> ratePerHour;

    cout << "Enter base salary: ";
    cin >> baseSalary;

    grossSalary = weeklyWorkingHours * ratePerHour;

    bonusPayment = grossSalary * bonusRate;

    netSalary = grossSalary * 0.85;

    cout << "\nEmployee: " << employeeName << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Net Salary (after tax): $" << netSalary << endl;

    return 0;

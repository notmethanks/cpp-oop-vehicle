// Generated with help from ChatGPT
#include <bits/stdc++.h>
using namespace std;

// Lớp Vehicle đại diện cho phương tiện vận tải
class Vehicle {
private:
    string type;      // Loại phương tiện (Car, Truck, Motorcycle)
    int maxSpeed;     // Tốc độ tối đa (km/h)
    string fuelType;  // Loại nhiên liệu (Gasoline, Diesel, ...)

public:
    // Constructor: khởi tạo thuộc tính
    Vehicle(string t, int m, string f) {
        type = t;
        maxSpeed = m;
        fuelType = f;
    }

    // Phương thức tăng tốc
    void accelerate() {
        cout << "The " << type << " is accelerating to " 
             << maxSpeed << " km/h." << endl;
    }

    // Getter cho type
    string getType() {
        return type;
    }

    // Getter cho maxSpeed
    int getMaxSpeed() {
        return maxSpeed;
    }

    // Hiển thị thông tin phương tiện
    void displayInfo() {
        cout << "Type: " << type 
             << ", Max Speed: " << maxSpeed << " km/h"
             << ", Fuel: " << fuelType << endl;
    }
};

int main() {
    // Tạo một số đối tượng Vehicle
    Vehicle car("Car", 200, "Gasoline");
    Vehicle truck("Truck", 150, "Diesel");
    Vehicle motorcycle("Motorcycle", 180, "Gasoline");

    // Xuất thông tin phương tiện
    car.displayInfo();
    truck.displayInfo();
    motorcycle.displayInfo();

    // Gọi accelerate()
    car.accelerate();
    truck.accelerate();
    motorcycle.accelerate();

    // Cho phép nhập từ người dùng
    string userType, userFuel;
    int userSpeed;
    cout << "\nNhap loai phuong tien: ";
    cin >> userType;
    cout << "Nhap toc do toi da: ";
    cin >> userSpeed;
    cout << "Nhap loai nhien lieu: ";
    cin >> userFuel;

    Vehicle userVehicle(userType, userSpeed, userFuel);
    cout << "\nThong tin phuong tien ban vua tao:\n";
    userVehicle.displayInfo();
    userVehicle.accelerate();

    return 0;
}

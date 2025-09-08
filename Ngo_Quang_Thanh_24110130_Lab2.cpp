// Generated with help from ChatGPT
/*
    Trong bài này, mình bắt đầu từ yêu cầu thực tế: quản lý các loại phương tiện trong một đội xe. Theo lý thuyết OOP, bước 1 là xác định thực thể (class) và thuộc tính,hành vi cốt lõi. Mình chọn lớp Vehicle làm đại diện cho phương tiện với hai thuộc tính cơ bản: type (loại) và maxSpeed (tốc độ tối đa). Sau đó mở rộng thêm fuelType để phản ánh đặc trưng vận hành. Về hành vi, phương thức accelerate mô phỏng hành động tăng tốc, còn displayInfo in đầy đủ thông tin để quan sát trạng thái đối tượng.

Khó khăn chủ yếu là tốc độ âm hay không, và phản hồi thế nào khi nhập sai. Mình quyết định chuẩn hóa maxSpeed về 0 nếu dữ liệu âm và để accelerate xử lý tình huống này bằng thông điệp rõ ràng. Ngoài ra, để đảm bảo độ bền vững khi chạy thực tế, mình bổ sung các hàm nhập liệu an toàn thay vì phụ thuộc vào luồng cin trực tiếp, giúp tránh lỗi runtime khi người dùng nhập chữ thay vì số.

Cách tiếp cận OOP giúp cô lập dữ liệu và hành vi liên quan trong lớp Vehicle.Mình xây dựng một bộ test nhỏ gồm các trường hợp bình thường và biên (maxSpeed = 0, maxSpeed âm, loại nhiên liệu khác nhau) để kiểm tra. Qua nhiều lần biên dịch và chạy, mình tinh chỉnh thông báo, quy ước đặt tên CamelCase, và chú thích mã để mã nguồn sạch, dễ đọc, và bám sát quy trình đã học.
*/
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


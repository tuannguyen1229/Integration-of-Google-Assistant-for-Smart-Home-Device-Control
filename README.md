# README - Tích hợp Google Assistant điều khiển các thiết bị Smart Home

## Giới thiệu

Dự án nghiên cứu và triển khai hệ thống Smart Home với khả năng điều
khiển các thiết bị bằng Google Assistant thông qua giọng nói. Người dùng
có thể điều khiển đèn, quạt, rèm cửa, camera và cảm biến khí gas từ xa
qua WiFi, giúp nâng cao sự tiện lợi và trải nghiệm trong sinh hoạt hàng
ngày.

## Mục tiêu

-   Xây dựng hệ thống Smart Home hoàn chỉnh.
-   Tích hợp Google Assistant để điều khiển thiết bị bằng giọng nói.
-   Điều khiển từ xa mọi lúc mọi nơi qua Internet.
-   Ứng dụng công nghệ IoT, MQTT, HTTP vào nhà thông minh.
-   Tự động hóa quy trình dựa trên điều kiện môi trường.

## Thành phần hệ thống

### Phần cứng

-   Công tắc WiFi Sonoff T2US3C
-   Công tắc WiFi TUYA
-   Đèn 220V
-   Camera EZVIZ CS-C6N
-   Google Home Mini (Google Assistant)
-   Quạt 12V DC
-   Động cơ bước 28BYJ-48 điều khiển rèm
-   Cảm biến khí gas MQ-2
-   ESP8266 NodeMCU

### Phần mềm và giao thức

-   Google Assistant API
-   MQTT
-   HTTP
-   Cloud và ứng dụng Google Home

## Chức năng chính

### 1. Điều khiển thiết bị bằng giọng nói

Người dùng có thể ra lệnh cho Google Assistant để bật/tắt đèn, điều
khiển quạt, đóng mở rèm cửa, kiểm tra camera,...

### 2. Tự động hóa

Hệ thống hỗ trợ tự động: - Mở rèm buổi sáng, đóng vào buổi trưa. - Kéo
rèm khi phát hiện khí gas (MQ2). - Điều khiển điều hòa, quạt dựa trên
nhiệt độ.

### 3. Điều khiển từ xa qua Internet

Dù ở bất kỳ đâu, người dùng vẫn điều khiển được các thiết bị nhờ kết nối
WiFi và Google Home.

### 4. Giám sát và cảnh báo

-   Theo dõi tình trạng môi trường.
-   Cảnh báo khí gas.
-   Giám sát hình ảnh thông qua camera EZVIZ.

## Kiến trúc hệ thống

Hệ thống bao gồm: - Google Assistant nhận lệnh giọng nói → gửi lệnh đến
cloud. - Cloud chuyển tiếp lệnh về ESP8266 qua MQTT/HTTP. - ESP8266 xử
lý và điều khiển thiết bị tương ứng. - Cảm biến gửi dữ liệu ngược lại để
tự động hóa.

## Quy trình nghiên cứu và triển khai

1.  Tìm hiểu công nghệ liên quan: IoT, Google Assistant, MQTT, API.
2.  Thiết kế mô hình Smart Home.
3.  Lựa chọn thiết bị phù hợp.
4.  Lập trình ESP8266 và cấu hình Google Assistant.
5.  Tích hợp toàn bộ hệ thống.
6.  Kiểm thử và tối ưu hiệu suất.

## Kết luận

Dự án đã hoàn thành mục tiêu tích hợp Google Assistant vào hệ thống
Smart Home với khả năng điều khiển thiết bị bằng giọng nói, tự động hóa
và giám sát môi trường. Hệ thống vận hành ổn định và có tiềm năng mở
rộng.

## Hướng phát triển

-   Tích hợp thêm cảm biến môi trường (DHT22, ánh sáng,...)
-   Điều khiển đa phòng, đa người dùng.
-   Hoàn thiện ứng dụng điều khiển riêng cho hệ thống.
-   Triển khai trên nền điện toán đám mây để tối ưu tốc độ phản hồi.

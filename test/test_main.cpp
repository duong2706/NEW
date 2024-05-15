#include <unity.h>

// Hàm setup, được gọi trước khi bắt đầu chạy các kiểm thử
void setUp(void) {
    // Không cần thiết trong trường hợp này
}

// Hàm teardown, được gọi sau khi kết thúc các kiểm thử
void tearDown(void) {
    // Không cần thiết trong trường hợp này
}

// Các hàm kiểm thử cần được viết dưới đây

// Ví dụ về một hàm kiểm thử đơn giản
void test_example(void) {
    // Sử dụng các hàm kiểm thử của Unity để kiểm tra điều kiện
    TEST_ASSERT_TRUE(1 == 1);
}

// Hàm main, là nơi bắt đầu chạy các kiểm thử
int main() {
    // Khởi tạo Unity để chạy các kiểm thử
    UNITY_BEGIN();

    // Đăng ký các hàm kiểm thử để chạy
    RUN_TEST(test_example);

    // Kết thúc quá trình kiểm thử và trả về kết quả
    return UNITY_END();
}

#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};
float area(struct Rectangle rect) {
    return rect.width * rect.height;
}
float perimeter(struct Rectangle rect) {
    return 2 * (rect.width + rect.height);
}
int main() {
    struct Rectangle rect;
    rect.width = 5.5;
    rect.height = 3.2;
    
    printf("Ширина: %f, Высота: %f\n", rect.width, rect.height);
    printf("Площадь: %f\n", area(rect));
    printf("Периметр: %f\n", perimeter(rect));
}
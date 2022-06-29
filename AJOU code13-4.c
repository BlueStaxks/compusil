
typedef struct {
    int x;  int y;
} pointType;

typedef struct {
    pointType sp;
    pointType ep;
    int color[3];
    int width;
    enum kind {
        solid = 1, dotted   //나열형(열거형) 변수
    };
} lineType;

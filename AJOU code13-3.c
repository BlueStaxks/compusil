
//타입을 정의하라고만 했으므로 코드가 실행 가능할 필요는 없다.

typedef int NewType; // 추상적으로 정의된 타입. 나중에 char나 long등으로 쉽게 바꿀 수 있는 범용성이 있다.
typedef struct {
    NewType a1; //함수의 매개변수
    NewType a2; //호출이 끝난 뒤 돌아갈 반환 주소값
    NewType a3; //함수에서 선언된 지역변수
} stackFrame;

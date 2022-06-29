void duff(char* to, char* from, int count) {
    int n = (count + 7) / 8;
    switch (count % 8) {
    case 0: do {
        *to++ = *from++;
    case 7:  *to++ = *from++;
    case 6: *to++ = *from++;
    case 5: *to++ = *from++;
    case 4: *to++ = *from++;
    case 3: *to++ = *from++;
    case 2: *to++ = *from++;
    case 1: *to++ = *from++;
    } while (--n > 0);
    }
}

수정할 사항이 없는 것으로 보인다.

from의 문자열을 count 만큼 to에 복사하는 프로그램이다.
8개의 문자 단위로 끊어가면서 복사한다.
while문이나 for문을 통해 더 짧게 구현될 수 있다.
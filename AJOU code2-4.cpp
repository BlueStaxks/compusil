﻿/*
* 
* 127을 2진법으로 나타내면
* 0111 1111   이다.
* 
* 1을 2진법으로 나타내면
* 0000 0001   이다.
* 
* 이 둘을 더하는 덧셈은 바로 더해주면 되는데
* 
*   0111 1111
* + 0000 0001
* -----------
*   1000 0000   가 된다.
* 
* 1000 0000가 뭔지 알기 위해선 2의 보수로 나타내보면 되는데, 1000 0000 -> 0111 1111 -> 1000 0000 이고 실제 정답인 128과는 전혀 다르다.
* 
* 연산 결과의 b7 xor b6 값은 1이므로 오류가 발생한 것을 또 다르게 알 수 있다.
* 
* 8비트 연산에서는 최대 값이 127인데 정답이 128인 계산을 하니 오류가 발생하는 것이다.
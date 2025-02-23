//////////////////////////////////////////////////////////
// [0과 1로 문자를 표현하는 방법]
//////////////////////////////////////////////////////////

// [ 문자 집합과 인코딩 ] ///////////////////////////////////

// ## 문자 집합 ////////////////////////////////////////////

// 문자 집합이란 컴퓨터가 인식하고 표현할 수 있는 문자의 모음을 의미한다.

// ## 인코딩 ///////////////////////////////////////////////

// 문자를 0과 1로 변환하는 과정을 문자 인코딩이라 한다.이와 반대로 문자 코드를 사람이 이해할 수 있는 문자로 변환하는 과정을 문자 디코딩이라 한다.

// -------------------------------------------------------
// 정리

// - 컴퓨터가 인식할 수 있는 문자들의 모음을 문자 집합이라 한다.
// - 문자들을 컴퓨터가 이해할 수 있는 0과 1로 변환하는 과정을 문자 인코딩이라 한다.
// - 반대로 0과 1을 사람이 이해할 수 있는 문자로 변환하는 과정을 문자 디코딩이라 한다.
// -------------------------------------------------------

//////////////////////////////////////////////////////////

// [ 아스키 코드 ] /////////////////////////////////////////

// 아스키는 초창기 문자 집합 중 하나로 영어 알파벳과 아라비아 숫자, 그리고 일부 특수 문자를 포함한다.아스키 문자는 각각 7bit로 표현되는데, 총 128개의 문자를 표현할 수 있다.*

// - 패리티 비트

// 실제로는 하나의 아스키 코드를 표현하기 위해 8bit를 사용하나 하나의 bit는 패리티 비트라 불리는, 오류 검출을 위한 비트로 사용이 되는 비트다.따라서 실질적으로는 7bit이다.

// 아스키 문자에 대응된 고유한 수를 아스키 코드라고 한다.

// 아스키 코드를 이진수로 표현함으로써 아스키 문자들은 0과 1로 표현할 수 있다.

// 아스키 코드의 장점
// : 매우 간단하게 인코딩된다.

// 아스키 코드의 단점
// : 한글 뿐만 아니라 아스키 문자 집합 외의 문자, 특수 문자 표현 불가능하다.

// 이러한 이유로 등장한 한글 인코딩 방식이 바로 EUC - KR이다.

// [ EUC - KR ] //////////////////////////////////////////

// 한글 인코딩 방식에는 완성형(한글 완성형 인코딩)과 조합형(한글 조합형 인코딩), 두 가지가 존재한다.

// ## 완성형 인코딩 ////////////////////////////////////////

// 완성형 인코딩 방식이란 초성, 중성, 종성의 조합으로 이루어진 완성된 하나의 글자에 고유한 코드를 부여하는 인코딩 방식이다.

// ## 조합형 인코딩 ////////////////////////////////////////

// 조합형 인코딩 방식은 초성을 위한 비트열, 중성을 위한 비트열, 종성을 위한 비트열을 할당하여 그것들의 조합으로 하나의 글자 코드를 완성하는 인코딩 방식이다.

// EUC - KR은 완성형 인코딩 방식으로 한글 글자 하나에 2byte 크기의 코드를 부여한다.

// 해당 방식으로 2350개 정도의 한글 단어를 표현할 수 있으나 이 또한 한글 전체를 표현하기엔 역부족.

//////////////////////////////////////////////////////////

// [ 유니코드와 UTF - 8 ] //////////////////////////////////

// ## 유니코드 /////////////////////////////////////////////

// 유니코드 문자 집합은 훨씬 다양한 한글을 포함하며 대부분 나라의 문자, 특수 문자, 화살표나 이모티콘까지 코드로 표현할 수 있는 통일된 문자 집합이다.

// 글자에 부여된 값 자체를 인코딩된 값으로 삼지 않고 이 값을 다양한 방법으로 인코딩한다.이러한 인코딩 방법에는 크게 UTF - 8, UTF - 16, UTF - 32 등이 있다.

// ## UTF - 8 /////////////////////////////////////////////

// 인코딩한 값의 결과가 1byte ~4byte까지 될 수 있다.
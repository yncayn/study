//
//  main.cpp
//  study_c
//
//  Created by 윤채연 on 2023/09/13.
//

#include <iostream>     //필수로 할 것

using namespace std;    //필수로 할 것

#define vote_count 5; //vote_count 라는 변수를 정의하고 5를 넣어줄 것이다.

int main(int argc, const char * argv[]) {
    
    //1)
    int a;  //변수를 선언해준다.
    a = 20;
    a = 50; //a의 값이 20에서 50으로 바뀐다.
    
    //cout 은 내가 출력하고 싶을 때 이용한다. print와 비슷한 역할을 하는 것이다.
    cout << "a의 값은:" << a << "입니다." << endl;
    cout << vote_count; //변수를 설정하면 나중에 값이 변하더라도 코드를 갈아치울 필요가 없다.
    //질문: cout << vote_count; << endl; 하면 오류뜬다?
    cout << endl;
    
    int b = 10 , c;
    c = b % 7;
    cout << "b의 값은:" << b << "입니다." << endl;
    
    //2) ++가 앞에 붙는 경우 (전위 증가 연산자) , 뒤에 붙는 경우 (후위 증가 연산자)
    a = 10;
    b = ++a;
    cout <<"b의 값은: " << b << endl;
    cout << "a의 값은: "<< a << endl;
    //출력 결과 b는 11이 나온다.
    //++이 앞에 붙는 경우 전위 증가 연산자로 뒤에서부터 연산된다.
    //즉 a 가 10 이었는데 +1을 하여 11이 된 것이다. 이 값이 b에 전해진 것이다. b = 10 + 1
    
    b = a++;
    cout << "b의 값은:" << b << endl;
    cout << "a의 값은:" << a << endl;
    //출력 결과 a 는 12 가 된다.
    //++이 뒤에 붙는 경우 후위 증가 연산자로 앞에서부터 연산된다.
    //b 가 11 이었는데 이후 +1을 하여 a 가 12가 된 것이다.
    
    //3) 참 거짓 판정
    a = 10;
    b = 20;
    cout << (a == b) << endl;   //0(거짓)
    cout << (a != b) << endl;   //1(참)
    cout << (a <= b) << endl;   //1(참)
    cout << (a >= b) << endl;   //0(거짓)
    cout << !(a != b) << endl;  //0(거짓)
    //결과 값은 참(1) 혹은 거짓(0)으로 나온다.
    
    //4) 문장의 끝은 ; 이 기준이다.
    cout
    <<
    (a==b)
    <<
    endl;
    //오류 없이 0이 출력된다. 문장의 끝이 되는 기준은 ; 이기 때문이다.
    
    
    //5) 논리 연산자 (||or, &&and, !not)
    cout << (a>5 || a<20) << endl;
    //참 or 참 이므로 1이 출력된다.
    cout << (a>5 && a<20) << endl;
    //거짓 and 참 이므로 1이 출력된다.
    
    
    //6) 삼항연산자 ( 조건 ? 참 : 거짓 ;)
    //조건 ? 참 : 거짓 ;
    //조건이 참이면 참인 문장을 수행하고 거짓이면 거짓인 문장을 수행한다.
    int input, result;
    cout << "정수입력:";
    cin >> input;
    result = input % 2 == 0 ? 1 : 0;
    //오류발생? result = input % 2 == 0 ? "true" : "false";
    //2로 나누어 나머지가 0과 같다면 (조건), 0을 result에게 준다 (참). 0이 아니라면 1을 result 에게 준다 (거짓).
    
    
    //7) 정수끼리의 연산은 그 결과로 무조건 정수갑만 출력한다.
    cout << 9 / 2 << endl;
    //출력: 4
    cout << 9.0 / 2 << endl;
    //출력: 4.5
    a = 9;
    b = 2;
    cout << a/b << endl;
    
    cout << (float)a / (float)b << endl;
    //정수형인 a와 b를 실수형으로 바꾸어 계산하겠다. 따라서 결과가 소숫점 포함된 4.5가 된다.
    //이 경우 a와 b의 값을 바꾼 것은 아니지만, 변환했다고 생각해주면 된다. a의 값이 9.0이 된 것은 아닌 것이다.
    
    
    //8) 조건문
    //if(조건문) cout << 참인 경우 수행되는 조건 << endl;
    //if 조건문의 끝은 ;으로 파악한다.
    //8.1)
    if(0)
        cout << 1 << endl;
    cout << 2 << endl;
    cout << 3 << endl;
        /*따라서 위의 조건문을 수행하면 2, 3만 출력된다.
         아래의 두 줄은 조건문이 끝나고 추가로 붙는 문장이므로 조건문에 들어가지 않지만 첫번째 1이 있는 줄은 조건문안에 해당하므로
         조건문이 0인 거짓이 들어가있으므로 아무것도 출력되지 않는것이다. */
    
    //8.2)
    if(1)
        cout << 1 << endl;
    cout << 2 << endl;
    cout << 3 << endl;
        /*위의 경우와는 다르게 조건문에 1인 참을 넣으면_ 참이므로 1이 출력될 것이다.
         마찬가지로 ;으로 if 조건문이 끝났으므로 아래의 두 문장은 조건문에 포함되지 않는 그냥 문장에 불과하다. 따라서 그냥 출력된다.
         */
    
    //8.3)
    //여러개의 값이 출력되도록 하는 경우 {} 의 중괄호를 쓰면 된다.
    if(1)
    {
        cout << 1 << endl;
        cout << 2 << endl;
        cout << 3 << endl;
    }
    //참이므로 123이 모두 출력된다.
    
    if(0)
    {
        cout << 1 << endl;
        cout << 2 << endl;
        cout << 3 << endl;
    }
    //거짓이므로 123이 모두 출력되지 않는다.
    
    //8.4) if 와 else 을 모두 사용하는 조건문
    if(0)
    {
        cout << 1 << endl;
        cout << 2 << endl;
        cout << 3 << endl;
    }
    else{
        cout << "거짓입니다.";
        cout << "거짓이라고!" << endl;
    }
    
    //else에 들어가는 문장이 하나라면 {}을 빼도 된다.
    if(0)
    {
        cout << 1 << endl;
        cout << 2 << endl;
        cout << 3 << endl;
    }
    else
        cout << "거짓입니다." << endl;
    
    
    //연습문제
    //정수 한개를 입력받아서 짝수면 짝수를, 홀수면 홀수를 출력하는 프로그램을 작성하시오
    cout << "정수 한개 입력:";
    int inputNum;
    cin >> inputNum;
    if (inputNum % 2 == 0)
    cout << "짝수";
    else
    cout << "홀수";
    
}

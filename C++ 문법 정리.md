C++ 문법 정리


ios::sync_with_stdio(false);//iostream(cin,cout)과 c의 stdio(scanf, prinf)를 동기화 해제하는 역할
 
cin.tie(0);//출력버퍼 비우기

리버스 : reverse(vec.begin() , vec.begin() ); //#include <algorithm>필요 

문자열을 스트림 처럼 다루는 법(스트림: cin(입력 스트림), >>연산자를 이용해서 데이터를 한 덩어리씩 꺼내오는 방식)
#include<sstream>
- stringstream a(스트링); - 입력과 출력을 모두 지원
- isringstream a(스트링); - 입력 전용 스트림
- ostringstream a(스트링); - 출력 전용 스트림

<code>
ex)
getline(cin, subject);
stringstream a(subject);
string first, third;
float second;
a >> first >> second >> third;

<code>
ex) 
ostring oss;
oss << "Name :" << name << "Age : " << age;
string result = oss.str();

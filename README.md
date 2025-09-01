#코딩테스트

1. 시작과 동시에 코딩하기 X
2. 시간 10% 이상 문제 분석하기
3. 시간 복잡도(제한시간, 데이터 크기), 샘플 예제(손으로 풀어보기), 반례 찾기
4. 테스트 케이스 통과 후 바로 제출하지말기


# CodingTest
코딩테스트 연습


깃 연동(git bash)

git config --global user.name "pch2001"

git config --global user.email pencil0303@nvaer.com

git config --list

폴더 cmd 실행 후 git clone https://github.com/pch2001/CodingTest.git


gitignore

이렇게 #를 사용해서 주석
- 모든 file.c
- file.c
- 최상위 폴더의 file.c
- /file.c
- 모든 .c 확장자 파일
- *.c
- .c 확장자지만 무시하지 않을 파일
- !not_ignore_this.c
- logs란 이름의 파일 또는 폴더와 그 내용들
logs
- logs란 이름의 폴더와 그 내용들
- logs/
- logs 폴더 바로 안의 debug.log와 .c 파일들
- logs/debug.log
- logs/*.c
- logs 폴더 바로 안, 또는 그 안의 다른 폴더(들) 안의 debug.log
- logs/**/debug.log

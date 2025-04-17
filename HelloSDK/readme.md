#초기설정

프로젝트 우클릭 → 속성(Properties)

링커(Linker) → 시스템(System)

서브시스템(SubSystem):
→ Console (/SUBSYSTEM:CONSOLE) ❌
→ ✅ Windows (/SUBSYSTEM:WINDOWS)

## 서브시스템(SubSystem)
링커 설정에서
이 프로그램이 어떤 환경에서 실행될지 운영체제에 알려주는 설정

📌 두 가지 주요 서브시스템

서브시스템	            설명	            진입점          함수
/SUBSYSTEM:CONSOLE	콘솔(터미널)            앱	            main()
/SUBSYSTEM:WINDOWS	윈도우 GUI              앱	            WinMain()


🔹 1. 처음엔 Console로 되어 있었음
Visual Studio가 main()을 찾아 실행하려고 했는데

너는 WinMain()만 작성해둔 상태

링커: “main 없어? 그럼 실행 못해!” → 오버로드 오류처럼 보이는 에러

🔹 2. Windows 서브시스템으로 바꾸면?
링커가 WinMain()을 진입점으로 자동 인식

에러 없이 WinMain()으로 시작 → 실행 성공 🎉

###쉬운설명
콘솔 서브시스템은 터미널 앱으로 실행, 터미널 있어야 함
→ main() 없으면 에러

윈도우 서브시스템은 창 띄우는 GUI 앱
→ WinMain()만 있으면 됨

### TIP
진입점 변경도 수동 지정 가능
만약 서브시스템은 WINDOWS인데도 Visual Studio가 진입점을 못 찾는다면:

속성 → 링커 → 고급 → 진입점(Entry Point)
→ WinMainCRTStartup 입력

하지만 대부분은 서브시스템만 맞추면 자동으로 인식합니다.
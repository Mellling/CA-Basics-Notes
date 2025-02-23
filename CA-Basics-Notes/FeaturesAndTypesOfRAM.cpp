//////////////////////////////////////////////////////////
// [RAM의 특징과 종류]
//////////////////////////////////////////////////////////

// [ RAM의 특징 ] /////////////////////////////////////////

// - 휘발성 메모리 : 전원을 끄면 저장된 내용이 사라지는 저장 장치
// ex) RAM
// - 비휘발성 메모리 : 전원이 꺼져도 저장된 내용이 사라지지 않는 저장 장치
// ex) SSD, CD - ROM, USB 메모리 같은 보조기억장치

// 보조기억장치는 전원을 꺼도 내용을 유지, 하지만 CPU는 보조기억장치에 직접 접근할 수 없다.

// 일반적으로 보조기억장치인 비휘발성 저장 장치에는 ‘보관할 대상’을, 휘발성 저장 장치에는 ‘실행할 대상’을 저장한다.

//////////////////////////////////////////////////////////

// [ RAM의 용량과 성능 ] ///////////////////////////////////

// CPU가 실행하고 싶은 프로그램이 보조기억장치에 있다면 이를 RAM으로 가져와야 할 한다.

// → RAM의 용량이 적다면 보조기억장치에서 실행할 프로그램을 가져오는 일이 잦아 실행 시간이 길어진다.용량이 크다면 미리 실행할 프로그램을 저장할 수 있다.

// 이처럼 RAM 용량이 크면 많은 프로그램을 동시에 빠르게 실행하는데 유리하다.

// 그러나 용량이 필요 이상으로 커졌을 때는 그에 비례하여 증가하지 않는다.

// CPU는 동시에 처리할 수 있는 데이터의 양과 속도가 정해져 있기 때문에 RAM 용량이 커져도 성능이 증가하지 않는 한계가 있기 때문이다.

//////////////////////////////////////////////////////////

// [ RAM의 종류 ] /////////////////////////////////////////

// RAM의 종류에는 크게 DRAM, SRAM, SDRAM, DDR SDRAM이 있다.

// ## DRAM ///////////////////////////////////////////////

// 시간이 지나면 저장된 데이터가 점차 사라지는 RAM이다.

// → 데이터 소멸을 막기 위해 일정 주기로 데이터를 재활성화(다시 저장)해야 한다.

// 우리가 일상적으로 사용하는 RAM인데, 소비 전력이 비교적 낮고, 저렴하고, 집적도가 높기* 때문에 대용량으로 설계하기에 용이하기 때문이다.

// * 집적도가 높다라는 말은 더 작고 빽빽하게 만들 수 있다라는 말과 같다.

// ## SRAM ////////////////////////////////////////////////

// 시간이 지나도 저장된 데이터가 소멸되지 않는 RAM으로 주기적으로 데이터를 재활성화할 필요가 없다.

// DRAM에 비해 소비 전력이 높고, 가격이 비싸며 집적도가 낮다.그래서 메모리가 아닌 ‘대용량으로 만들어질 필요가 없지만 속도가 빨라야 하는 저장 장치’, 가령 캐시 메모리에 사용된다.

// ## SDRAM(SDR SDRAM) ////////////////////////////////////

// 클럭 신호와 동기화된, 발전된 형태의 DRAM으로, 여기서 클럭 신호에 동기화되었다는 말은 클럭 타이밍에 맞춰 CPU와 정보를 주고받을 수 있음을 의미한다.

// 즉, SDRAM은 클럭에 맞춰 동작하며 클럭마다 CPU와 정보를 주고받을 수 있는 DRAM이다.

// ## DDR SDRAM ///////////////////////////////////////////

// 대역폭* 을 넓혀 속도를 빠르게 만든 SDRAM이다.

// * 데이터를 주고받는 길의 너비를 의미한다.

// 한 클럭에 한 번씩 CPU와 데이터를 주고받는 SDRAM과 달리, DDR SDRAM은 두 배의 대역폭으로 한 클럭당 두 번씩 CPU와 데이터를 주고 받을 수 있다.

// 정리 ---------------------------------------------------
// - RAM은 휘발성 저장 장치, 보조기억장치는 비휘발성 저장 장치이다.
// - DRAM은 시간이 지나면 저장된 데이터가 점차 사라지는 RAM이며, SRAM은 시간이 지나도 저장된 데이터가 사라지지 않는 RAM이다.
// - SDRAM(SDR SDRAM)은 클럭과 동기화된 RAM이다.
// - DDR SDRAM은 SDRAM보다 대역폭이 두 배 넓다.
// --------------------------------------------------------
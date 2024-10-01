//#include "can1registers.hpp"
//#include "can2registers.hpp"

//#include "fields.hpp"

//#include "metautils.hpp"
//#include "configuration.h"

//#include <algorithm>
//#include <vector>

int main()
{
    //Values<CAN1::MCTRL::DZEN::Value0,CAN2::MCTRL::AEBOEN::Value1>::Set();

    //CAN1::MCTRL::SetFields<CAN1::MCTRL::PTD::Value0,
                           //CAN1::MCTRL::AEBOEN::Value1>();


/*
  RCC::AHB1ENR::GPIOAEN::Enable::Set() ;

  RCC::AHB1ENR::GPIOAEN::Enable::Set() ;
  GPIOA::MODER::MODER15::Output::Set() ;
  GPIOA::MODER::SetFields<GPIOA::MODER::MODER12::Output,
                          GPIOA::MODER::MODER14::Analog>() ;
  //*******************************************

  // Включаем тактирование на порту GPIOA
  //Ошибка компиляции, у регистра APB1ENR нет поля GPIOAEN
  //RCC::APB1ENR::GPIOAEN::Enable::Set() ;

  //Все хорошо, подали тактирование на порт GPIOA
  RCC::AHB1ENR::GPIOAEN::Enable::Set() ;

  //Ошибка компиляции, RCC::APB2ENR::TIM1EN::Enable не
  //является полем регистра APB1ENR
  //RCC::APB1ENR::Set<RCC::APB1ENR::TIM2EN::Enable,
  //                  RCC::APB2ENR::TIM1EN::Enable>();

  //Ошибка компиляции, регистр BSRR только для записи
  //auto result = GPIOA::BSRR::Get() ;

  //Ошибка компиляции, значение Reset только для записи
  //if (GPIOA::BSRR::BS1::Reset::IsSet())
  {
     //do something
  }

  //Ошибка компиляции, значение поля регистра только для чтения
 // GPIOA::IDR::IDR5::On::Set()


  GPIOA::MODER::MODER15::Output::Set() ;
  auto result = GPIOA::MODER::MODER15::Output::IsSet() ;
  GPIOA::MODER::Set(2U) ;
  auto test = GPIOA::MODER::Get() ;

  GPIOA::MODER::SetFields<GPIOA::MODER::MODER15::Output,
  	  	  	  	  	  	  GPIOA::MODER::MODER14::Analog>() ;

  result = GPIOA::MODER::IsSetFields<GPIOA::MODER::MODER15::Output,
		  	  	  	  	  	  	  	 GPIOA::MODER::MODER14::Analog>() ;

  GPIOA::MODER::MODER15::Set(2U) ;
  test = GPIOA::MODER::MODER15::Get() ;

  auto i = GPIOA::IDR::Get() ;

  GPIOA::BSRR::SetFields<GPIOA::BSRR::BR0::Reset,
  	  	  	  	  	  	 GPIOA::BSRR::BR4::Reset>() ;

*/
  return 0 ;
}









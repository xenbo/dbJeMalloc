//
// Created by dongbo on 5/4/18.
//

#include <iostream>
#include <map>
#include <memory>



void test(){
    auto *tmp = new std::string();


    *tmp = ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
           ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad"
    ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad";




    delete  tmp;

//    std::shared_ptr<std::string> tmp = std::make_shared<std::string>();
//
//    *tmp = ";lsakdfl;kasdl;fkla;sdkfa;fasd;;;;;;;;;;;;;;;;;;;;;;;fl;asddkjfl;sakdlf;kasl;dfkasld;fkal;sdkfl;daskfl;asdkfl;asdkfl;sad";



    char *a= new char[1000];

    delete[] a;

}



int main(){

   // while(1)
    test();

    return 0;
}
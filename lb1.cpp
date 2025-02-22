#include <iostream>
#include <bitset>
void condition_reverse(int &status,int Numberconditionbitreverse){
    status ^= (1 << (5 - Numberconditionbitreverse));
}
void condition_status(int status,int targetbit,bool &test){
    if (status&(1<<(5 -targetbit))){
        test = true;
    }
}
void condition_counter(int status,int &counter){
    for(int i =0;i<=4;i++){
    if (status&(1<<(i))){
        counter+=1;
    }
}
}
void detections(int status,bool &DETECTION){
    DETECTION = (status & (1 << 4)) && (status & (1 << 3)) && (status & (1 << 2));
}
int main(int, char**){
    int Numberconditionbitreverse = 2;
    int list_condition = 0b10101;
    //для 2 функции
    int targetbit = 3;
    bool test = false;
    //для 3 функции
    int counter = 0;
    //для 4 функции 
    bool DETECTION = false;
    condition_reverse(list_condition,Numberconditionbitreverse);
    condition_status(list_condition,targetbit,test);
    condition_counter(list_condition,counter);
    detections(list_condition,DETECTION);
}

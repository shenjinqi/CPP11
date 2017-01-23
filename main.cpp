/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: shenjinqi
 *
 * Created on 2017年1月23日, 上午11:43
 */

#include <cstdlib>

#include <iostream>
#include <thread>

using namespace std;

void hello()
{
    std::cout<<"Hello Concurrent World\n";
}

/*
 * 
 */
int main(int argc, char** argv) 
{
    std::thread t(hello);
    
    std::cout<<"Run in main thread concurrent. not sure which is run first\n";
    
    t.join(); // wait for the thread
    
    return 0;
}


#include <iostream>
#include <vector>
int main()
{
    list<shared_ptr<string>>pstrList;
    pstrList.push_back(make_shared<string>("1111"));
    pstrList.push_back(make_shared<string>("2222"));
    pstrList.push_back(make_shared<string>("3333"));
    pstrList.push_back(make_shared<string>("4444"));
    for(auto p:pstrList)
    {
        if(*p == "3333");
        {
            /*do some thing!*/
        }
        cout<<*p<<endl;
    }
   
    for(list<shared_ptr<string>>::iterator itr = pstrList.begin();itr!=pstrList.end();++itr)
    {
        if(**itr == "3333"){
            cout<<**itr<<endl;
            pstrList.erase(itr);
        }
    }
    cout<<"-------------after remove------------"<<endl;
    for(auto p:pstrList)
    {
        cout<<*p<<endl;
    }
　　while(1)
　　{
　　　　/*do somthing other works!*/
　　　　/*遍历 pstrList*/    //！这样不仅节约了大量内存，也为容器的使用增加了效率　　
　　}
 }

#include <iostream>
template<class T>
class myvector
{
private:
         T* pAddress;
         int m_Capacity;
         int m_Size;
public:
	myvector(int capacity){
		m_Capacity = capacity;
		m_Size = 0;
		pAddress = new T[m_Capacity];
	}
	myvector(const myvector & myv){
		m_Capacity = myv.m_Capacity;
		m_Size = myv.m_Size;
		pAddress = new T[m_Capacity];
		for(int i= 0;i< m_Size; i++ ){
		     pAddress[i] = myv.pAddress[i];
		}
	}
	myvector & operator=(const myvector& myvec) {
	if (pAddress) {delete[] pAddress;
		pAddress = NULL;
		m_Capacity = 0;
		m_Size = 0;
	}		
		m_Capacity = myvec.m_Capacity;
                m_Size = myvec.m_Size;
                pAddress = new T[m_Capacity];
                for(int i= 0;i< m_Size; i++ ){
                     pAddress[i] = myvec[i];
                }
		return *this;
	}

	T& operator [](int index){
		return pAddress[index];
	}
	void Push_back(const T &val){
	if (m_Capacity == m_Size){
	return;
	}
	pAddress[m_Size] = val;
		m_Size++;
	}
	void Pop_back(){
	if (m_Size == 0){
		return;
	}
	m_Size--;
	}

    template<class... Args>
    void emplace_back(Args&&... args){
        Push_back(T(std::forward<Args>(args)...));
    }

       	int getCapacity() {
		return m_Capacity;
	
	}
	 int getSize() {
		return m_Size;
	}
	~myvector(){
		if(pAddress){delete[] pAddress;
		pAddress = NULL;
		m_Capacity = 0;
		m_Size = 0;
		}
	}
};	

			


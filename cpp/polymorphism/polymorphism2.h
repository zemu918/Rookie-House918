#include<iostream>
class Rhopi_ChargedTrack :public ChargedTrack {
    public:
	virtual void findarea() {
		std::cout << "Rhopi find charged track" << std::endl;
	}
};
class Rhopi_GoodGamma :public GoodGamma {
    public:
	virtual void findangle() {
		std::cout << "Rhopi find good gamma" << std::endl;
	}
};
class Rhopi_ParticleID :public ParticleID {
    public:
	virtual void findmomentum() override {
		std::cout << "Rhopi particle identify" << std::endl;
	}
};
class Rhopi_Vertexfit :public Vertexfit {
    public:
	virtual void findvertex() {
		std::cout << "Rhopi fit in vertex" << std::endl;
	}
};
class Rhopi_Momentumfit :public Momentumfit {
    public:
	virtual void findtrack() {
		std::cout << "Rhopi find final track" << std::endl;
	}
};
class Tautau_ChargedTrack :public ChargedTrack {
    public:
	virtual void findarea() { 
		std::cout << "Tautau find charged track" << std::endl; 
	}
};






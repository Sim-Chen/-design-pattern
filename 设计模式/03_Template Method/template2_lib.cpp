//����⿪����Ա
class Library{
public:
	//�ȶ� template method����Ҫ�ȶ����㷨��ܣ�������Step1��Step3��Step5�ȶ�
	//�ȶ����б仯
	//�ȶ���д����ͨ���������ȶ���д���麯��
    void Run(){
        
        Step1();

        if (Step2()) { //֧�ֱ仯 ==> �麯���Ķ�̬����
            Step3(); 
        }

        for (int i = 0; i < 4; i++){
            Step4(); //֧�ֱ仯 ==> �麯���Ķ�̬����
        }

        Step5();

    }
	virtual ~Library(){ }

protected:
	
	void Step1() { //�ȶ�
        //.....
    }
	void Step3() {//�ȶ�
        //.....
    }
	void Step5() { //�ȶ�
		//.....
	}

	virtual bool Step2() = 0;//�仯
    virtual void Step4() =0; //�仯
};
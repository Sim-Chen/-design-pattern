class IProgress
{
	public :
		
}



class FileSplitter
{
	string m_filePath;
	int m_fileNumber;
	//ProgressBar* m_progressBar;//违反了依赖倒置原则,具体通知控件
	IProgress * m_iprogressBar;//抽象通知机制

public:
	FileSplitter(const string& filePath, int fileNumber, ProgressBar* progressBar) :
		m_filePath(filePath), 
		m_fileNumber(fileNumber),
		m_progressBar(progressBar){

	}

	void split(){

		//1.读取大文件

		//2.分批次向小文件中写入
		for (int i = 0; i < m_fileNumber; i++){
			//...
			float progressValue = m_fileNumber;
			progressValue = (i + 1) / progressValue;
			m_progressBar->setValue(progressValue);
		}

	}
};
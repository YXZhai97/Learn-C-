#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{	

	int select=0;

	while(true)
	{
		cout<<"---------欢迎来到机房预约系统-----------"<<endl;
		cout<<endl;
		cout<<"请输入您的身份数字"<<endl;
		cout<<"1: 学生"<<endl;
		cout<<"2: 老师"<<endl;
		cout<<"3: 管理员"<<endl;
		cout<<"0: 退出"<<endl;
		cout<<"--------------------------------------"<<endl;
		cout<<"请输入您的身份数字：";

		cin>>select;
		switch (select)
		{
		case 0:
			cout<<"欢迎下次使用"<<endl;
			system("pause");
			return 0;
		case 1: //学生身份
			break;
		case 2://老师身份
			break;
		case 3://管理员身份
			break;
		
		default://退出系统
			cout<<"输入有误，请重新选择！";
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
	
	
}
/***************************************************
*�ļ�����main.cpp
*�����ˣ�taotao
*���ڣ�2017-7-5
*������C++��Ŀ��С�������ɼǡ�
*�޸��ˣ�someone
*���ڣ�someday
*�汾��1.0.0
****************************************************/

#include <iostream>
#include <iomanip>//���������ʽ
#include <ctime>//����� 
#include <cstdlib>
#include <vector> 
#include <array>
#include <string>

using namespace std;
int main() {
	/** ���׵�����*/
	string value_father_name;
	/** Ů��������*/
	string value_daughter_name;
	/** Ů�����յ��·�*/
	int value_birth_month = 1;
	/**Ů�����յ�����*/
	int value_birth_date = 1;
	/** Ů��������*/
	string value_daughther_conastell;
	/*Ů�������������Ϣ�����������������������¡�����*/
	array<int,5> value_array_baseinfo;
	/*�������������*/
	array<string, 5>value_array_baseinfo_name = { "����", "����", "����", "����", "����" };
	string answer;
	//��ʼ��Ǯ
	int money=600;
	int choice, temp1, temp2, temp3,temp4,temp5;
	/*������*/
	/** ������ά����*/
	string constell_names[12][2] = {
		{"Ħ����","ˮƿ��"},//һ��
		{"ˮƿ��","˫����"},//����
		{"˫����","������"},//����
		{"������","��ţ��"},//����
		{"��ţ��","˫����"},//����
		{"˫����","��з��"},//����
		{"��з��","ʨ����"},//����
		{"ʨ����","��Ů��"},//����
		{"��Ů��","�����"},//����
		{"�����","��Ы��"},//ʮ��
		{"��Ы��","������"},//ʮһ��
		{"������","Ħ����"},//ʮ����
	};
	/** ���·ݵĿ���������*/
	int constell_dates[]{20,19,21,20,21,22,23,23,23,24,23,22};
	
	//1��Ϊ��Ůȡ��
	cout << "���׵�������";
	cin >> value_father_name;
	cout << "Ů����������";
	cin >> value_daughter_name;
	cout << "Ů��������(MM DD)��";
	cin >> value_birth_month >> value_birth_date;
	//2��ΪŮ��¼���ʼ��Ϣ���ա�����
	value_daughther_conastell = constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]];
	cout << "��Ԫ1659�꣬����" << value_father_name << "������Ů��" << value_daughter_name << endl;
	cout << "Ů������Ϣ��";
	cout << "������ " << value_daughter_name << endl;
	cout << "���գ�1648-" << value_birth_month << "-" << value_birth_date<<endl;
	cout << "������" << value_daughther_conastell << endl;	
	cout << "���䣺11��" << endl;
	cout << "��Ǯ��" << money<<endl;
	// ����Ů�������������û������������������������������¡����ʣ� 
	if (value_daughther_conastell == "������"){
		value_array_baseinfo[0] = 80;value_array_baseinfo[1] = 15;value_array_baseinfo[2] = 15;
		value_array_baseinfo[3] = 11;value_array_baseinfo[4] = 21;
	}else if (value_daughther_conastell == "��ţ��"){
		value_array_baseinfo[0] = 46; value_array_baseinfo[1] = 30; value_array_baseinfo[2] = 28;
		value_array_baseinfo[3] = 20; value_array_baseinfo[4] = 29;
	}else if (value_daughther_conastell == "˫����"){
		value_array_baseinfo[0] = 50; value_array_baseinfo[1] = 35; value_array_baseinfo[2] = 23;
		value_array_baseinfo[3] = 8; value_array_baseinfo[4] = 20;
	}else if (value_daughther_conastell == "��з��"){
		value_array_baseinfo[0] = 40; value_array_baseinfo[1] = 31; value_array_baseinfo[2] = 33;
		value_array_baseinfo[3] = 17; value_array_baseinfo[4] = 11;
	}else if (value_daughther_conastell == "ʨ����"){
		value_array_baseinfo[0] = 85; value_array_baseinfo[1] = 9; value_array_baseinfo[2] = 11;
		value_array_baseinfo[3] = 20; value_array_baseinfo[4] = 37;
	}else if (value_daughther_conastell == "��Ů��"){
		value_array_baseinfo[0] = 35; value_array_baseinfo[1] = 28; value_array_baseinfo[2] = 36;
		value_array_baseinfo[3] = 18; value_array_baseinfo[4] = 40;
	}else if (value_daughther_conastell == "�����"){
		value_array_baseinfo[0] = 42; value_array_baseinfo[1] = 33; value_array_baseinfo[2] = 25;
		value_array_baseinfo[3] = 32; value_array_baseinfo[4] = 28;
	}else if (value_daughther_conastell == "Ħ����"){
		value_array_baseinfo[0] = 50; value_array_baseinfo[1] = 25; value_array_baseinfo[2] = 40;
		value_array_baseinfo[3] = 18; value_array_baseinfo[4] = 17;
	}else if (value_daughther_conastell == "������"){
		value_array_baseinfo[0] = 57; value_array_baseinfo[1] = 31; value_array_baseinfo[2] = 15;
		value_array_baseinfo[3] = 19; value_array_baseinfo[4] = 20;
	}else if (value_daughther_conastell == "������"){
		value_array_baseinfo[0] = 56; value_array_baseinfo[1] = 43; value_array_baseinfo[2] = 20;
		value_array_baseinfo[3] = 23; value_array_baseinfo[4] = 21;
	}else if (value_daughther_conastell == "ˮƿ��"){
		value_array_baseinfo[0] = 43; value_array_baseinfo[1] = 35; value_array_baseinfo[2] = 23;
		value_array_baseinfo[3] = 8; value_array_baseinfo[4] = 17;
	}else if (value_daughther_conastell == "˫����"){
		value_array_baseinfo[0] =41; value_array_baseinfo[1] = 21; value_array_baseinfo[2] = 29;
		value_array_baseinfo[3] = 23; value_array_baseinfo[4] = 12;
	}
	
	//3����ʼ��Ϸ��ѭ��
	//��Ϸ��1659�꿪ʼ
	cout << "��Ϸ��ʼ**************************" << endl<<endl<<endl<<endl;
	for (int year = 1659; year <= year + 7; year++)
	{
		for (int month =(year==1659) ? value_birth_month: 1; month <= 12; month++)
		{
			//�жϱ����Ƿ���Ů������
			if (month == value_birth_month){
				cout << "��ǰʱ�䣺" << year << "-" << month << "�£�" << "����" << value_birth_date << "����" << value_daughter_name << "���գ�Ҫ��Ҫ�����(y/n)";
				//�����û���������ж�
				cin >> answer;
				if (answer == "y"){
					cout << "����200���ΪŮ������һ������������" << endl;
					money = money - 200;
					value_array_baseinfo[0] = value_array_baseinfo[0] + 11;
					cout << "��������11" << endl;
					value_array_baseinfo[1] = value_array_baseinfo[0] + 11;
					cout << "��������11" << endl;
					value_array_baseinfo[2] = value_array_baseinfo[0] + 5;
					cout << "��������5" << endl;
					value_array_baseinfo[3] = value_array_baseinfo[0] + 5;
					cout << "��������5" << endl;
					value_array_baseinfo[4] = value_array_baseinfo[0] + 15;
					cout << "��������15" << endl;
				}
			}
			//��ʾ��Ϸ���˵�
				cout << "��ǰʱ��" << year<<"-"<<month << endl;
				cout << "\n1���鿴״̬\n2�������г�\n3������̸��\n4���浵\n5������" << endl;
				cin >> choice;
				switch (choice)
				{case 1://�鿴״̬
					cout << "��⺢�����ڵ�״����" << endl;
					cout << "������ " << value_daughter_name << endl;
					cout << "���գ�1648-" << value_birth_month << "-" << value_birth_date << endl;
					cout << "������" << value_daughther_conastell << endl;
					cout << "���䣺" <<year-1648<<endl;
					cout << "��Ǯ��" << money << endl;
					//��ӡ��������
					for (int i = 0; i < 5; i++){
						cout << left;
						cout << value_array_baseinfo_name[i] <<":  "<<setw(4)<< value_array_baseinfo[i];
						//����ʵ�ķ��������
						int solidcount = value_array_baseinfo[i]/10;
						for (int j = 0; j < 10; j++)
						{
							if (j <solidcount)
								cout << "��";
							else
								cout << "��";
						}
					cout << endl;
					}
					break;
				
				case 2:{//�����г̣�һ������ల��3���г�
					string month_parts[3] = { "��Ѯ", "��Ѯ", "��Ѯ" };
					for (int i = 0; i < 3; i++){
					//�жϵ�ǰ�����Ƿ�С��0��С��0ʱѡ�����������������
						if (value_array_baseinfo[0] <= 0)
						{
							cout << value_daughter_name << "���˺����صĲ����Ƿ����?(y/n)";
							cin >> answer;
							if (answer == "y"){
								value_array_baseinfo[0] += 20;
								cout << "����+20" << endl;
								money -= 200;
							}
							if (answer == "n"){
								cout << "Ů��" << value_daughter_name << "�������棬��Ϸ������";
								return 0;
							}
						}
						cout << "������--" << month << "��--" << month_parts[i] << "��Ҫ���ŵ�ʲô"<<endl;
						cout << "1��ѧϰ����\n2����˽��\n3��ѧϰ��\n4����������\n5����׬Ǯ" << endl;
						cout << "��ѡ���Ů����������" << endl;
						cin >> choice;
						//������Ҫע��Ǯ��û��Ǯǿ�ƴ�
						if (money <= 0){
							choice = 5;
						}
						srand(time(NULL));
						if (choice == 1){//+����+����-��Ǯ
							value_array_baseinfo[0] += temp1 = rand() % 11;//0~10֮��������
							value_array_baseinfo[2] += temp2 = rand() % 11;
							money -= temp3 = rand() % 51;//0~50֮��������
							cout << "վ���ɣ������ӣ�����磡����" << endl;
							cout << "ͨ��Ŭ��ѧϰ������+" << temp1 << ",����+" << temp2 << "����Ǯ-" << temp3 << endl;
						}
						else if (choice == 2){//+����+����-��Ǯ
							value_array_baseinfo[1] += temp1 = rand() % 11;//0~10֮��������
							value_array_baseinfo[2] += temp2 = rand() % 11;
							value_array_baseinfo[0] -= temp4 = rand() % 11;
							money -= temp3 = rand() % 51;//0~50֮��������
							cout << "Ī���У���������ͷ���ձ��У�����" << endl;
							cout << "ѧϰ��ɣ�����+" << temp1 << ",����+" << temp2 << "����Ǯ-" << temp3 <<"-����"<<temp4<< endl;
						}
						else if (choice == 3){//+����+����+����-��Ǯ-����
							value_array_baseinfo[2] += temp1 = rand() % 11;//0~10֮��������
							value_array_baseinfo[4] += temp2 = rand() % 11;
							value_array_baseinfo[3] += temp4 = rand() % 11;
							value_array_baseinfo[0] -= temp5 = rand() % 11;
            				money -= temp3 = rand() % 51;//0~50֮��������
							cout << "ѧϰ��ͳ���ǣ������У�����" << endl;
							cout << "ѧϰ��ɣ�����+" << temp1 << ",����+" << temp2 << "������+" << temp4 << "����Ǯ-" << temp3<<"������-"<<temp5 << endl;
						}
						else if (choice == 4){//+����+����+����-��Ǯ
							value_array_baseinfo[2] += temp1 = rand() % 11;//0~10֮��������
							value_array_baseinfo[4] += temp2 = rand() % 11;
							value_array_baseinfo[3] += temp4 = rand() % 11;
							money -= temp3 = rand() % 51;//0~50֮��������
							cout << "һ�����ƣ������ӷ𣡣���" << endl;
							cout << "ѧϰ��ɣ�����+" << temp1 << ",����+" << temp2 << "������+" << temp4 << "����Ǯ-" << temp3 << endl;
						}
						else if (choice == 5){//-����+��Ǯ
							value_array_baseinfo[0] -= temp1 = rand() % 11;//0~10֮��������
							money += temp3 = rand() % 101;//0~50֮��������
							cout << "�ж�����ǿ������" << endl;
							cout << "ѧϰ��ɣ�����-" << temp1 << "����Ǯ+" << temp3 << endl;
						}
					}break; }
			case 3:
				cout << "\n1������Ľ�̸\n2������������" << endl;
				cin >> choice;
				if (choice == 1){
					for (int i = 0; i < 5; i++){
						value_array_baseinfo[i] += temp1 = rand() % 11;
					}
					money += rand() % 51;
					for (int i = 0; i < 5; i++){
						cout << value_array_baseinfo_name[i] << "+" << temp1 << endl;
					}
				}
				if (choice == 2){
					for (int i = 0; i < 5; i++){
						value_array_baseinfo[i] += temp1 = rand() % 11;
					}
					money -= rand() % 51;
					for (int i = 0; i < 5; i++){
						cout << value_array_baseinfo_name[i] << "+" << temp1 << endl;
					}
				}
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				break;
				}
			

		}
	}
		//4�����ݸ���������ж���Ϸ��� 
	/*
	Ů��             ��������2000����
	����			 ��������1800~2000
	Ů����			 ��������1600-1800
	�ʼ�ѧԺ�ܲ�	 ��������1200-1600��������ߣ�������>����
	����			 ��������1200-1600��������ߣ�������>����
	������ʿ�ų�     ��������1200-1600��������ߣ�������>����
	�߼�����		 ��������1200-1600��������ߣ�������>����
	�����ĳ���		 ��������1200-1600��������ߣ�������>����*/
	int sum=0;
	for (int i = 0; i < 5; i++){
		sum += value_array_baseinfo[i];
	}
	if (sum > 2000)
	{
		cout << "��ϲ�㣬�ﵽ�����Ϸ�ȼ�����ΪŮ����";
	}else if (1800 <= sum && sum <= 2000)
	{
		cout << "��ϲ�㣬�ﵽ�θ���Ϸ�ȼ�����Ϊ������";
	}else if (1600 <= sum && sum < 1800)
	{
		cout << "��ϲ�㣬��ΪŮ������";
		int maxIndex = 0;
		for (int i = 1; i < 5; i++){
			if (value_array_baseinfo[i]>value_array_baseinfo[maxIndex])
				maxIndex = i;
		}
		if (maxIndex == 1 && value_array_baseinfo[1]>value_array_baseinfo[0]){
			cout << "��ϲ�㣬��Ϊ�ʼ�ѧԺŮ�ܲã�";
		}
		if (maxIndex == 2 && value_array_baseinfo[4]>value_array_baseinfo[0]){
			cout << "��ϲ�㣬��Ϊ������";
		}
		if (maxIndex == 0 && value_array_baseinfo[4]>value_array_baseinfo[2]){
			cout << "��ϲ�㣬��Ϊ������ʿ�ų���";
		}
		if (maxIndex == 3 && value_array_baseinfo[3]>value_array_baseinfo[4]){
			cout << "��ϲ�㣬�߼����룡";
		}
		if (maxIndex == 2 && value_array_baseinfo[4]>value_array_baseinfo[3]){
			cout << "��ϲ�㣬��Ϊ�����ĳ�����";
		}
	}
		return 0;
}
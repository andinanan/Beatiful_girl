/***************************************************
*文件名：main.cpp
*创建人：taotao
*日期：2017-7-5
*描述：C++项目《小公举养成记》
*修改人：someone
*日期：someday
*版本：1.0.0
****************************************************/

#include <iostream>
#include <iomanip>//控制输出格式
#include <ctime>//随机数 
#include <cstdlib>
#include <vector> 
#include <array>
#include <string>

using namespace std;
int main() {
	/** 父亲的姓名*/
	string value_father_name;
	/** 女儿的姓名*/
	string value_daughter_name;
	/** 女儿生日的月份*/
	int value_birth_month = 1;
	/**女儿生日的日期*/
	int value_birth_date = 1;
	/** 女儿的星座*/
	string value_daughther_conastell;
	/*女儿的五项基本信息：体力、智力、魅力、道德、气质*/
	array<int,5> value_array_baseinfo;
	/*五项基本属性名*/
	array<string, 5>value_array_baseinfo_name = { "体力", "智力", "魅力", "道德", "气质" };
	string answer;
	//初始的钱
	int money=600;
	int choice, temp1, temp2, temp3,temp4,temp5;
	/*算星座*/
	/** 星座二维数组*/
	string constell_names[12][2] = {
		{"摩羯座","水瓶座"},//一月
		{"水瓶座","双鱼座"},//二月
		{"双鱼座","白羊座"},//三月
		{"白羊座","金牛座"},//四月
		{"金牛座","双子座"},//五月
		{"双子座","巨蟹座"},//六月
		{"巨蟹座","狮子座"},//七月
		{"狮子座","处女座"},//八月
		{"处女座","天秤座"},//九月
		{"天秤座","天蝎座"},//十月
		{"天蝎座","射手座"},//十一月
		{"射手座","摩羯座"},//十二月
	};
	/** 各月份的跨星座日期*/
	int constell_dates[]{20,19,21,20,21,22,23,23,23,24,23,22};
	
	//1、为父女取名
	cout << "父亲的姓名：";
	cin >> value_father_name;
	cout << "女儿的姓名：";
	cin >> value_daughter_name;
	cout << "女儿的生日(MM DD)：";
	cin >> value_birth_month >> value_birth_date;
	//2、为女儿录入初始信息生日、星座
	value_daughther_conastell = constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]];
	cout << "公元1659年，富商" << value_father_name << "收养了女儿" << value_daughter_name << endl;
	cout << "女儿的信息：";
	cout << "姓名： " << value_daughter_name << endl;
	cout << "生日：1648-" << value_birth_month << "-" << value_birth_date<<endl;
	cout << "星座：" << value_daughther_conastell << endl;	
	cout << "年龄：11岁" << endl;
	cout << "金钱：" << money<<endl;
	// 根据女儿的星座，设置基本参数（体力、智力、魅力、道德、气质） 
	if (value_daughther_conastell == "白羊座"){
		value_array_baseinfo[0] = 80;value_array_baseinfo[1] = 15;value_array_baseinfo[2] = 15;
		value_array_baseinfo[3] = 11;value_array_baseinfo[4] = 21;
	}else if (value_daughther_conastell == "金牛座"){
		value_array_baseinfo[0] = 46; value_array_baseinfo[1] = 30; value_array_baseinfo[2] = 28;
		value_array_baseinfo[3] = 20; value_array_baseinfo[4] = 29;
	}else if (value_daughther_conastell == "双子座"){
		value_array_baseinfo[0] = 50; value_array_baseinfo[1] = 35; value_array_baseinfo[2] = 23;
		value_array_baseinfo[3] = 8; value_array_baseinfo[4] = 20;
	}else if (value_daughther_conastell == "巨蟹座"){
		value_array_baseinfo[0] = 40; value_array_baseinfo[1] = 31; value_array_baseinfo[2] = 33;
		value_array_baseinfo[3] = 17; value_array_baseinfo[4] = 11;
	}else if (value_daughther_conastell == "狮子座"){
		value_array_baseinfo[0] = 85; value_array_baseinfo[1] = 9; value_array_baseinfo[2] = 11;
		value_array_baseinfo[3] = 20; value_array_baseinfo[4] = 37;
	}else if (value_daughther_conastell == "处女座"){
		value_array_baseinfo[0] = 35; value_array_baseinfo[1] = 28; value_array_baseinfo[2] = 36;
		value_array_baseinfo[3] = 18; value_array_baseinfo[4] = 40;
	}else if (value_daughther_conastell == "天秤座"){
		value_array_baseinfo[0] = 42; value_array_baseinfo[1] = 33; value_array_baseinfo[2] = 25;
		value_array_baseinfo[3] = 32; value_array_baseinfo[4] = 28;
	}else if (value_daughther_conastell == "摩羯座"){
		value_array_baseinfo[0] = 50; value_array_baseinfo[1] = 25; value_array_baseinfo[2] = 40;
		value_array_baseinfo[3] = 18; value_array_baseinfo[4] = 17;
	}else if (value_daughther_conastell == "射手座"){
		value_array_baseinfo[0] = 57; value_array_baseinfo[1] = 31; value_array_baseinfo[2] = 15;
		value_array_baseinfo[3] = 19; value_array_baseinfo[4] = 20;
	}else if (value_daughther_conastell == "白羊座"){
		value_array_baseinfo[0] = 56; value_array_baseinfo[1] = 43; value_array_baseinfo[2] = 20;
		value_array_baseinfo[3] = 23; value_array_baseinfo[4] = 21;
	}else if (value_daughther_conastell == "水瓶座"){
		value_array_baseinfo[0] = 43; value_array_baseinfo[1] = 35; value_array_baseinfo[2] = 23;
		value_array_baseinfo[3] = 8; value_array_baseinfo[4] = 17;
	}else if (value_daughther_conastell == "双鱼座"){
		value_array_baseinfo[0] =41; value_array_baseinfo[1] = 21; value_array_baseinfo[2] = 29;
		value_array_baseinfo[3] = 23; value_array_baseinfo[4] = 12;
	}
	
	//3、开始游戏大循环
	//游戏从1659年开始
	cout << "游戏开始**************************" << endl<<endl<<endl<<endl;
	for (int year = 1659; year <= year + 7; year++)
	{
		for (int month =(year==1659) ? value_birth_month: 1; month <= 12; month++)
		{
			//判断本月是否是女儿生日
			if (month == value_birth_month){
				cout << "当前时间：" << year << "-" << month << "月，" << "本月" << value_birth_date << "日是" << value_daughter_name << "生日，要不要送礼物？(y/n)";
				//根据用户输入进行判断
				cin >> answer;
				if (answer == "y"){
					cout << "花费200金币为女儿买了一个精美的礼物" << endl;
					money = money - 200;
					value_array_baseinfo[0] = value_array_baseinfo[0] + 11;
					cout << "体力增加11" << endl;
					value_array_baseinfo[1] = value_array_baseinfo[0] + 11;
					cout << "智力增加11" << endl;
					value_array_baseinfo[2] = value_array_baseinfo[0] + 5;
					cout << "魅力增加5" << endl;
					value_array_baseinfo[3] = value_array_baseinfo[0] + 5;
					cout << "道德增加5" << endl;
					value_array_baseinfo[4] = value_array_baseinfo[0] + 15;
					cout << "气质增加15" << endl;
				}
			}
			//显示游戏主菜单
				cout << "当前时间" << year<<"-"<<month << endl;
				cout << "\n1、查看状态\n2、安排行程\n3、亲子谈话\n4、存档\n5、读档" << endl;
				cin >> choice;
				switch (choice)
				{case 1://查看状态
					cout << "额，这孩子现在的状况：" << endl;
					cout << "姓名： " << value_daughter_name << endl;
					cout << "生日：1648-" << value_birth_month << "-" << value_birth_date << endl;
					cout << "星座：" << value_daughther_conastell << endl;
					cout << "年龄：" <<year-1648<<endl;
					cout << "金钱：" << money << endl;
					//打印核心属性
					for (int i = 0; i < 5; i++){
						cout << left;
						cout << value_array_baseinfo_name[i] <<":  "<<setw(4)<< value_array_baseinfo[i];
						//计算实心方块的数量
						int solidcount = value_array_baseinfo[i]/10;
						for (int j = 0; j < 10; j++)
						{
							if (j <solidcount)
								cout << "■";
							else
								cout << "□";
						}
					cout << endl;
					}
					break;
				
				case 2:{//安排行程，一个月最多安排3个行程
					string month_parts[3] = { "上旬", "中旬", "下旬" };
					for (int i = 0; i < 3; i++){
					//判断当前体力是否小于0，小于0时选择救助或者让其死亡
						if (value_array_baseinfo[0] <= 0)
						{
							cout << value_daughter_name << "生了很严重的病，是否救助?(y/n)";
							cin >> answer;
							if (answer == "y"){
								value_array_baseinfo[0] += 20;
								cout << "体力+20" << endl;
								money -= 200;
							}
							if (answer == "n"){
								cout << "女儿" << value_daughter_name << "香消玉殒，游戏结束！";
								return 0;
							}
						}
						cout << "现在是--" << month << "月--" << month_parts[i] << "需要安排点什么"<<endl;
						cout << "1、学习武艺\n2、上私塾\n3、学习礼法\n4、出城修行\n5、打工赚钱" << endl;
						cout << "请选择对女儿的提升：" << endl;
						cin >> choice;
						//这里需要注意钱，没有钱强制打工
						if (money <= 0){
							choice = 5;
						}
						srand(time(NULL));
						if (choice == 1){//+体力+魅力-金钱
							value_array_baseinfo[0] += temp1 = rand() % 11;//0~10之间的随机数
							value_array_baseinfo[2] += temp2 = rand() % 11;
							money -= temp3 = rand() % 51;//0~50之间的随机数
							cout << "站如松，坐如钟，行如风！！！" << endl;
							cout << "通过努力学习，体力+" << temp1 << ",魅力+" << temp2 << "，金钱-" << temp3 << endl;
						}
						else if (choice == 2){//+气质+智力-金钱
							value_array_baseinfo[1] += temp1 = rand() % 11;//0~10之间的随机数
							value_array_baseinfo[2] += temp2 = rand() % 11;
							value_array_baseinfo[0] -= temp4 = rand() % 11;
							money -= temp3 = rand() % 51;//0~50之间的随机数
							cout << "莫等闲，白了少年头，空悲切！！！" << endl;
							cout << "学习完成，魅力+" << temp1 << ",气质+" << temp2 << "，金钱-" << temp3 <<"-体力"<<temp4<< endl;
						}
						else if (choice == 3){//+气质+魅力+道德-金钱-体力
							value_array_baseinfo[2] += temp1 = rand() % 11;//0~10之间的随机数
							value_array_baseinfo[4] += temp2 = rand() % 11;
							value_array_baseinfo[3] += temp4 = rand() % 11;
							value_array_baseinfo[0] -= temp5 = rand() % 11;
            				money -= temp3 = rand() % 51;//0~50之间的随机数
							cout << "学习传统礼仪，我最行！！！" << endl;
							cout << "学习完成，魅力+" << temp1 << ",气质+" << temp2 << "，道德+" << temp4 << "，金钱-" << temp3<<"，体力-"<<temp5 << endl;
						}
						else if (choice == 4){//+气质+魅力+道德-金钱
							value_array_baseinfo[2] += temp1 = rand() % 11;//0~10之间的随机数
							value_array_baseinfo[4] += temp2 = rand() % 11;
							value_array_baseinfo[3] += temp4 = rand() % 11;
							money -= temp3 = rand() % 51;//0~50之间的随机数
							cout << "一心向善，阿弥陀佛！！！" << endl;
							cout << "学习完成，魅力+" << temp1 << ",气质+" << temp2 << "，道德+" << temp4 << "，金钱-" << temp3 << endl;
						}
						else if (choice == 5){//-体力+金钱
							value_array_baseinfo[0] -= temp1 = rand() % 11;//0~10之间的随机数
							money += temp3 = rand() % 101;//0~50之间的随机数
							cout << "男儿当自强！！！" << endl;
							cout << "学习完成，体力-" << temp1 << "，金钱+" << temp3 << endl;
						}
					}break; }
			case 3:
				cout << "\n1、温柔的交谈\n2、严厉的批评" << endl;
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
		//4、根据各项参数，判定游戏结果 
	/*
	女王             属性总数2000以上
	王妃			 属性总数1800~2000
	女将军			 属性总数1600-1800
	皇家学院总裁	 属性总数1200-1600，智力最高，且智力>体力
	公主			 属性总数1200-1600，魅力最高，且气质>体力
	近卫骑士团长     属性总数1200-1600，体力最高，且气质>魅力
	高级祭祀		 属性总数1200-1600，道德最高，且魅力>气质
	国王的宠妃		 属性总数1200-1600，魅力最高，且气质>道德*/
	int sum=0;
	for (int i = 0; i < 5; i++){
		sum += value_array_baseinfo[i];
	}
	if (sum > 2000)
	{
		cout << "恭喜你，达到最高游戏等级：成为女王！";
	}else if (1800 <= sum && sum <= 2000)
	{
		cout << "恭喜你，达到次高游戏等级：成为王妃！";
	}else if (1600 <= sum && sum < 1800)
	{
		cout << "恭喜你，成为女将军！";
		int maxIndex = 0;
		for (int i = 1; i < 5; i++){
			if (value_array_baseinfo[i]>value_array_baseinfo[maxIndex])
				maxIndex = i;
		}
		if (maxIndex == 1 && value_array_baseinfo[1]>value_array_baseinfo[0]){
			cout << "恭喜你，成为皇家学院女总裁！";
		}
		if (maxIndex == 2 && value_array_baseinfo[4]>value_array_baseinfo[0]){
			cout << "恭喜你，成为公主！";
		}
		if (maxIndex == 0 && value_array_baseinfo[4]>value_array_baseinfo[2]){
			cout << "恭喜你，成为近卫骑士团长！";
		}
		if (maxIndex == 3 && value_array_baseinfo[3]>value_array_baseinfo[4]){
			cout << "恭喜你，高级祭祀！";
		}
		if (maxIndex == 2 && value_array_baseinfo[4]>value_array_baseinfo[3]){
			cout << "恭喜你，成为国王的宠妃！";
		}
	}
		return 0;
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Server
	{	private:
			string serverName;
			int cpuUsage = 0;
			int ramUsage = 0;
			bool valid;

		public:
			Server(string name, int cpu, int ram)
			{
				serverName = name;
				validation(cpu,ram);
			}
			void validation(int cpu,int ram)
			{
				if((cpu>=0 && cpu<=100) && (ram>=0 && ram<=100))
				{
					cpuUsage = cpu;
					ramUsage = ram;
					valid = true;
				}
				else
				{
					valid = false;
				}
			}
			string status()
			{
				if( valid == false )
				{
					return "Invalid";
				}
				else
				{
					if(cpuUsage <= 60 && ramUsage <=60)
					{
						return "Healthy";
					}
					else if(cpuUsage <= 80 && ramUsage <= 80)
					{
						return "Moderate";
					}
					else
					{
						return "High";
					}
				}
			}
			void displayInfo()
			{
				cout<<"Server: "<<serverName<<endl;
				if(valid == true)
				{

				cout<<"CPU: "<<cpuUsage<<"%"<<endl;

				cout<<"RAM: "<<ramUsage<<"%"<<endl;

				}

				else

				{

				cout<<"Status: "<<status()<<endl;

				}
			}

    	};
int main()
	{
		vector<Server> servers;
  		int server = 0;
		string name;
		int cpu, ram;
		int healthCount = 0;
		int moderateCount = 0;
		int highCount = 0;
		int invalidCount = 0;

		cout<<"\nHow many servers you want to monitor?: ";
		cin>>server;

		for(int i = 0; i<server; i++)
		{
			cout<<"\nEnter the server Name: ";
			cin>>name;
			cout<<"\nEnter CPU Usage: ";
			cin>>cpu;
			cout<<"\nEnter the RAM Usage: ";
			cin>>ram;

			Server server(name,cpu,ram);
			servers.push_back(server);

		}
		cout<<"\n\t_________________________________________"<<endl;
		for(size_t j = 0; j < servers.size(); j++)
		{
			servers[j].displayInfo();		}


                for(size_t k = 0; k<servers.size();k++)
		{
			if(servers[k].status() == "Healthy")
			{
				healthCount++;
			}
			else if(servers[k].status() == "Moderate")
			{
				moderateCount++;
			}
			else if(servers[k].status() == "High")
			{
				highCount++;
			}
			else if(servers[k].status() == "Invalid")
			{
				invalidCount++;
			}
		}
		int attentionCount = highCount + invalidCount;
                cout<<"\n\t===========INCIDENT SUMMARY============="<<endl;
                cout<<"Total Servers: "<<servers.size()<<endl;
		cout<<"Healthy: "<<healthCount<<endl;
		cout<<"Moderate: "<<moderateCount<<endl;
		cout<<"High: "<<highCount<<endl;
		cout<<"Invalid: "<<invalidCount<<endl;
		cout<<"Server requiring attention: "<<attentionCount<<endl;

	}

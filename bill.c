#include<stdio.h>
int main()
{
	int r_units,u_cons;
	float t_cost;
	printf("Enter the units consumed : ");
	scanf("%d",&u_cons);
	r_units=0;
	t_cost=0.0;
	if(u_cons>200)
	{
		t_cost=200*0.8;
		r_units=u_cons-200;
	}
	else
	{
		t_cost=u_cons*0.8;
		r_units=0;
	}
	if(r_units>100)
	{
		t_cost=t_cost+100*0.9;
		r_units=r_units-100;
	}
	else
	{
		t_cost=t_cost+r_units*0.9;
		r_units=0;
	}
	if(r_units>0)
	{
		t_cost=t_cost+r_units*1;
	}
	t_cost=t_cost+100;
	if(t_cost>400)
	{
		t_cost=t_cost*1.15;
	}
	printf("The Total cost is : %f Rs",t_cost);
    return 0;
		
}